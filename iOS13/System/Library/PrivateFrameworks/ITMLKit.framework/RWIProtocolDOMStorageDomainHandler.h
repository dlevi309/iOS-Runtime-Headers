/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@protocol RWIProtocolDOMStorageDomainHandler <NSObject>
@optional
-(void)enableWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2;
-(void)disableWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2;
-(void)getDOMStorageItemsWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 storageId:(id)arg3;
-(void)setDOMStorageItemWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 storageId:(id)arg3 key:(id)arg4 value:(id)arg5;
-(void)removeDOMStorageItemWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 storageId:(id)arg3 key:(id)arg4;

@end

