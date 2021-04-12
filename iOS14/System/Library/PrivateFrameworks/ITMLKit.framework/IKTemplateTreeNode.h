/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, IKViewElementStyle, NSDictionary, IKViewElementStyleComposer;

@interface IKTemplateTreeNode : NSObject <NSCopying> {

	IKTemplateTreeNode* _parentNode;
	NSString* _nodeName;
	IKViewElementStyle* _styleOverrides;
	NSDictionary* _childNodes;
	IKViewElementStyleComposer* _styleComposer;

}

@property (nonatomic,__weak,readonly) IKTemplateTreeNode * parentNode;                //@synthesize parentNode=_parentNode - In the implementation block
@property (nonatomic,copy,readonly) NSString * nodeName;                              //@synthesize nodeName=_nodeName - In the implementation block
@property (nonatomic,copy,readonly) IKViewElementStyle * styleOverrides;              //@synthesize styleOverrides=_styleOverrides - In the implementation block
@property (nonatomic,copy) NSDictionary * childNodes;                                 //@synthesize childNodes=_childNodes - In the implementation block
@property (nonatomic,retain) IKViewElementStyleComposer * styleComposer;              //@synthesize styleComposer=_styleComposer - In the implementation block
-(void)setChildNodes:(NSDictionary *)arg1 ;
-(NSString *)nodeName;
-(IKTemplateTreeNode *)parentNode;
-(IKViewElementStyle *)styleOverrides;
-(NSDictionary *)childNodes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(IKViewElementStyleComposer *)styleComposer;
-(void)setStyleComposer:(IKViewElementStyleComposer *)arg1 ;
-(id)initWithNodeName:(id)arg1 styleOverrides:(id)arg2 parentNode:(id)arg3 ;
@end

