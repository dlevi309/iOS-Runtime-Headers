/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSDOMXPathResult.h>

@class NSString, IKDOMNode, NSArray;

@interface IKDOMXPathResult : IKJSObject <IKJSDOMXPathResult> {

	long long _type;
	NSArray* _nodes;

}

@property (assign) long long type;                                              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSArray * nodes;                                     //@synthesize nodes=_nodes - In the implementation block
@property (nonatomic,readonly) long long resultType; 
@property (nonatomic,readonly) long long numberValue; 
@property (nonatomic,__weak,readonly) NSString * stringValue; 
@property (nonatomic,readonly) BOOL booleanValue; 
@property (nonatomic,__weak,readonly) IKDOMNode * singleNodeValue; 
@property (nonatomic,readonly) BOOL invalidIteratorState; 
@property (nonatomic,readonly) long long snapshotLength; 
-(long long)type;
-(void)setType:(long long)arg1 ;
-(NSString *)stringValue;
-(long long)resultType;
-(NSArray *)nodes;
-(void)setNodes:(NSArray *)arg1 ;
-(long long)numberValue;
-(BOOL)booleanValue;
-(IKDOMNode *)singleNodeValue;
-(BOOL)invalidIteratorState;
-(long long)snapshotLength;
-(id)iterateNext;
-(id)snapshotItem:(long long)arg1 ;
-(id)initWithAppContext:(id)arg1 type:(long long)arg2 nodes:(id)arg3 ;
@end

