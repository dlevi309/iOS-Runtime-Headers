/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSArray *)candidates;
-(void)setCandidates:(NSArray *)arg1 ;
-(void)setSem:(NSObject*<OS_dispatch_semaphore>)arg1 ;
@end

