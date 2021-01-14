/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <libobjc.A.dylib/RWIProtocolPageDomainHandler.h>

@class RWIProtocolPageFrameResourceTree, IKJSInspectorController, NSString;

@interface IKJSInspectorPageAgent : NSObject <RWIProtocolPageDomainHandler> {

	RWIProtocolPageFrameResourceTree* _resourceTree;
	IKJSInspectorController* _controller;
	NSString* _currentFrameIdentifier;

}

@property (nonatomic,readonly) RWIProtocolPageFrameResourceTree * resourceTree;              //@synthesize resourceTree=_resourceTree - In the implementation block
@property (nonatomic,retain) NSString * currentFrameIdentifier;                              //@synthesize currentFrameIdentifier=_currentFrameIdentifier - In the implementation block
@property (nonatomic,__weak,readonly) IKJSInspectorController * controller;                  //@synthesize controller=_controller - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IKJSInspectorController *)controller;
-(void)enableWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 ;
-(void)disableWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 ;
-(id)initWithInspectorController:(id)arg1 ;
-(void)documentDidChange;
-(void)setCurrentFrameIdentifier:(NSString *)arg1 ;
-(NSString *)currentFrameIdentifier;
-(RWIProtocolPageFrameResourceTree *)resourceTree;
-(void)reloadWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 ignoreCache:(BOOL*)arg3 revalidateAllResources:(BOOL*)arg4 ;
-(void)getResourceTreeWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 ;
-(void)getResourceContentWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 frameId:(id)arg3 url:(id)arg4 ;
-(void)_dispatchEventWithBlock:(/*^block*/id)arg1 ;
@end

