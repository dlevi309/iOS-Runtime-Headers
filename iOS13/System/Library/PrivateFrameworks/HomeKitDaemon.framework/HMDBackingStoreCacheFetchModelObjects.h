/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreCacheGroup, HMDBackingStoreCacheShareGroup, NSArray, NSUUID, NSString;

@interface HMDBackingStoreCacheFetchModelObjects : HMDBackingStoreOperation {

	HMDBackingStoreCacheGroup* _group;
	HMDBackingStoreCacheShareGroup* _share;
	/*^block*/id _fetchResult;
	NSArray* _uuids;
	NSArray* _names;
	NSUUID* _parent;
	NSString* _type;

}

@property (nonatomic,retain) HMDBackingStoreCacheGroup * group;                   //@synthesize group=_group - In the implementation block
@property (nonatomic,retain) HMDBackingStoreCacheShareGroup * share;              //@synthesize share=_share - In the implementation block
@property (nonatomic,copy) id fetchResult;                                        //@synthesize fetchResult=_fetchResult - In the implementation block
@property (nonatomic,retain) NSArray * uuids;                                     //@synthesize uuids=_uuids - In the implementation block
@property (nonatomic,retain) NSArray * names;                                     //@synthesize names=_names - In the implementation block
@property (nonatomic,retain) NSUUID * parent;                                     //@synthesize parent=_parent - In the implementation block
@property (nonatomic,retain) NSString * type;                                     //@synthesize type=_type - In the implementation block
-(NSUUID *)parent;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)setParent:(NSUUID *)arg1 ;
-(void)setGroup:(HMDBackingStoreCacheGroup *)arg1 ;
-(HMDBackingStoreCacheGroup *)group;
-(id)fetchResult;
-(NSArray *)names;
-(HMDBackingStoreCacheShareGroup *)share;
-(void)setShare:(HMDBackingStoreCacheShareGroup *)arg1 ;
-(void)setNames:(NSArray *)arg1 ;
-(NSArray *)uuids;
-(void)setFetchResult:(id)arg1 ;
-(id)mainReturningError;
-(id)initWithShareGroup:(id)arg1 uuids:(id)arg2 fetchResult:(/*^block*/id)arg3 ;
-(id)initWithGroup:(id)arg1 uuids:(id)arg2 fetchResult:(/*^block*/id)arg3 ;
-(void)setUuids:(NSArray *)arg1 ;
-(id)initWithShareGroup:(id)arg1 names:(id)arg2 fetchResult:(/*^block*/id)arg3 ;
-(id)initWithGroup:(id)arg1 names:(id)arg2 fetchResult:(/*^block*/id)arg3 ;
-(id)initWithShareGroup:(id)arg1 parent:(id)arg2 type:(id)arg3 fetchResult:(/*^block*/id)arg4 ;
-(id)initWithGroup:(id)arg1 parent:(id)arg2 type:(id)arg3 fetchResult:(/*^block*/id)arg4 ;
-(id)initWithParent:(id)arg1 type:(id)arg2 fetchResult:(/*^block*/id)arg3 ;
-(id)initWithUUIDs:(id)arg1 fetchResult:(/*^block*/id)arg2 ;
-(id)initWithNames:(id)arg1 fetchResult:(/*^block*/id)arg2 ;
@end

