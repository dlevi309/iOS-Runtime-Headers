/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/


#import <WebInspector/WebInspector-Structs.h>
@interface RWIProtocolDOMStorageDomainEventDispatcher : NSObject {

	AugmentableInspectorController* _controller;

}
-(void)safe_domStorageItemAddedWithStorageId:(id)arg1 key:(id)arg2 newValue:(id)arg3 ;
-(void)safe_domStorageItemUpdatedWithStorageId:(id)arg1 key:(id)arg2 oldValue:(id)arg3 newValue:(id)arg4 ;
-(void)safe_domStorageItemRemovedWithStorageId:(id)arg1 key:(id)arg2 ;
-(void)safe_domStorageItemsClearedWithStorageId:(id)arg1 ;
-(id)initWithController:(AugmentableInspectorController*)arg1 ;
-(void)domStorageItemsClearedWithStorageId:(id)arg1 ;
-(void)domStorageItemRemovedWithStorageId:(id)arg1 key:(id)arg2 ;
-(void)domStorageItemAddedWithStorageId:(id)arg1 key:(id)arg2 newValue:(id)arg3 ;
-(void)domStorageItemUpdatedWithStorageId:(id)arg1 key:(id)arg2 oldValue:(id)arg3 newValue:(id)arg4 ;
@end

