/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet;

@interface BLFamilyCircleController : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableSet* _cachedDSIDs;
	NSMutableSet* _ignoredDSIDs;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) NSMutableSet * cachedDSIDs;                              //@synthesize cachedDSIDs=_cachedDSIDs - In the implementation block
@property (nonatomic,retain) NSMutableSet * ignoredDSIDs;                             //@synthesize ignoredDSIDs=_ignoredDSIDs - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)refreshWithCompletion:(/*^block*/id)arg1 ;
-(NSMutableSet *)cachedDSIDs;
-(void)dq_processFamilyCircle:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSMutableSet *)ignoredDSIDs;
-(void)setCachedDSIDs:(NSMutableSet *)arg1 ;
-(void)setIgnoredDSIDs:(NSMutableSet *)arg1 ;
@end

