/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@class NSDictionary, NSArray;

@interface BLTBulletinFetcher : NSObject {

	NSDictionary* _bulletinIDs;
	NSArray* _sectionIDs;
	long long _sectionIDsIndex;
	NSArray* _publisherMatchIDsForSection;
	unsigned long long _publisherMatchIDsForSectionIndex;
	/*^block*/id _clientCompletion;
	/*^block*/id _fetcher;

}
+(id)batchBulletinFetchForBulletinIDs:(id)arg1 fetcher:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_incrementSection;
-(void)_fetchBulletins;
-(void)_setFetcher:(/*^block*/id)arg1 ;
-(void)_setClientCompletion:(/*^block*/id)arg1 ;
-(void)_setBulletinIDs:(id)arg1 ;
@end

