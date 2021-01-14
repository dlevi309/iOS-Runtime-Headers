/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKDOMObserver.h>
#import <libobjc.A.dylib/IKJSDOMNodeList.h>

@class IKDOMNode, NSArray, NSString;

@interface IKDOMNodeList : IKJSObject <IKDOMObserver, IKJSDOMNodeList> {

	IKDOMNode* _contextNode;
	/*^block*/id _evaluationBlock;
	NSArray* _nodes;

}

@property (nonatomic,retain) IKDOMNode * contextNode;                //@synthesize contextNode=_contextNode - In the implementation block
@property (nonatomic,copy,readonly) id evaluationBlock;              //@synthesize evaluationBlock=_evaluationBlock - In the implementation block
@property (nonatomic,copy) NSArray * nodes;                          //@synthesize nodes=_nodes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long length; 
+(id)nodeListWithAppContext:(id)arg1 contextNode:(id)arg2 xpath:(id)arg3 ;
-(id)item:(long long)arg1 ;
-(void)setNodes:(NSArray *)arg1 ;
-(long long)length;
-(NSArray *)nodes;
-(id)initWithAppContext:(id)arg1 contextNode:(id)arg2 evaluationBlock:(/*^block*/id)arg3 ;
-(void)_updateNodes;
-(id)evaluationBlock;
-(IKDOMNode *)contextNode;
-(void)domDidUpdateForContextNode:(id)arg1 ;
-(void)setContextNode:(IKDOMNode *)arg1 ;
@end

