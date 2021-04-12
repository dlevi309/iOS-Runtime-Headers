/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@class NSError, EQKitEnvironmentInstance, NSData;

@interface EQKitMathMLParser : NSObject {

	xmlNode* mRootNode;
	xmlNs* mNS;
	NSError* mError;
	EQKitEnvironmentInstance* mEnvironment;
	NSData* mSource;
	stack<EQKitMathMLParserState, std::__1::deque<EQKitMathMLParserState, std::__1::allocator<EQKitMathMLParserState> > >* mState;
	AttributeCollection* mAttributeCollection;

}

@property (nonatomic,readonly) xmlNs* ns; 
@property (nonatomic,readonly) NSError * error; 
@property (assign,nonatomic) AttributeCollection* attributeCollection; 
-(id)init;
-(void)dealloc;
-(NSError *)error;
-(int)state;
-(id)environment;
-(id)parse;
-(void)popState;
-(id)initWithDocument:(xmlDoc*)arg1 node:(xmlNode*)arg2 source:(id)arg3 environment:(id)arg4 ;
-(AttributeCollection*)attributeCollection;
-(void)parseAttributesForNode:(id)arg1 withXMLNode:(xmlNode*)arg2 ;
-(void)reportError:(long long)arg1 withNode:(xmlNode*)arg2 ;
-(id)parseNode:(xmlNode*)arg1 ;
-(id)parseChildrenAsArrayFromXMLNode:(xmlNode*)arg1 ;
-(void)pushState:(int)arg1 ;
-(BOOL)isElement:(int)arg1 allowedInState:(int)arg2 ;
-(void)setAttributeCollection:(AttributeCollection*)arg1 ;
-(id)parseChildrenAsNodeFromXMLNode:(xmlNode*)arg1 ;
-(id)parseChildrenAsTokenContentFromXMLNode:(xmlNode*)arg1 ;
-(xmlNs*)ns;
@end

