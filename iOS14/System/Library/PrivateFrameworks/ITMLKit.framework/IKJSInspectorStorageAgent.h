/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <libobjc.A.dylib/RWIProtocolDOMStorageDomainHandler.h>

@class IKJSInspectorController, NSString;

@interface IKJSInspectorStorageAgent : NSObject <RWIProtocolDOMStorageDomainHandler> {

	IKJSInspectorController* _controller;

}

@property (nonatomic,__weak,readonly) IKJSInspectorController * controller;              //@synthesize controller=_controller - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IKJSInspectorController *)controller;
-(void)dealloc;
-(void)_itemAdded:(id)arg1 ;
-(void)_itemUpdated:(id)arg1 ;
-(void)_itemRemoved:(id)arg1 ;
-(void)_itemsCleared:(id)arg1 ;
-(id)_storageForStorageId:(id)arg1 ;
-(id)_storageIdForStorage:(id)arg1 ;
-(void)enableWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 ;
-(void)disableWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 ;
-(void)getDOMStorageItemsWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 storageId:(id)arg3 ;
-(void)setDOMStorageItemWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 storageId:(id)arg3 key:(id)arg4 value:(id)arg5 ;
-(void)removeDOMStorageItemWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 storageId:(id)arg3 key:(id)arg4 ;
-(id)initWithInspectorController:(id)arg1 ;
-(void)startListeningForStorageNotifications;
-(void)stopListeningForStorageNotifications;
@end

