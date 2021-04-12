/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@interface PPMeCardCache : NSObject
+(id)sharedInstance;
-(id)init;
-(id)_dateComponentsFromCachedDateComponents:(id)arg1 ;
-(id)_cachedDateComponentsFromDateComponents:(id)arg1 ;
-(id)loadMeCardCache;
-(BOOL)writeMeCardCache:(id)arg1 ;
-(BOOL)deleteMeCardCache;
@end

