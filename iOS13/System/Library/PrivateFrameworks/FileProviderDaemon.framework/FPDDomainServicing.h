/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/


@protocol FPDDomainServicing
@required
-(void)deleteSearchableItemsWithSpotlightDomainIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)fetchAndStartEnumeratingWithSettings:(id)arg1 observer:(id)arg2 request:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)didChangeItemID:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)_t_setFilePresenterObserver:(id)arg1;
-(void)resolveItemID:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)setDomainWithIdentifier:(id)arg1 ejectable:(BOOL)arg2 completionHandler:(/*^block*/id)arg3;

@end

