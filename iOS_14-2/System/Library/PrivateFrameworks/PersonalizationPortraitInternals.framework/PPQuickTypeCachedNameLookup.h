/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@protocol OS_dispatch_semaphore;
@class NSObject, NSArray;

@interface PPQuickTypeCachedNameLookup : NSObject {

	NSObject*<OS_dispatch_semaphore> _sem;
	NSArray* _candidates;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> sem;              //@synthesize sem=_sem - In the implementation block
@property (nonatomic,retain) NSArray * candidates;                              //@synthesize candidates=_candidates - In the implementation block
-(NSObject*<OS_dispatch_semaphore>)sem;
-(void)setSem:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(NSArray *)candidates;
-(void)setCandidates:(NSArray *)arg1 ;
@end

