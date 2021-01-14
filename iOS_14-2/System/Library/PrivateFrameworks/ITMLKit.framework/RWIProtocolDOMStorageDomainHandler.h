/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@protocol RWIProtocolDOMStorageDomainHandler <NSObject>
@optional
-(void)enableWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2;
-(void)disableWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2;
-(void)getDOMStorageItemsWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 storageId:(id)arg3;
-(void)setDOMStorageItemWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 storageId:(id)arg3 key:(id)arg4 value:(id)arg5;
-(void)removeDOMStorageItemWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 storageId:(id)arg3 key:(id)arg4;
-(void)clearDOMStorageItemsWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 storageId:(id)arg3;

@end

