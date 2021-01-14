/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSMutableSet, NSMutableDictionary;

@interface _PLExpirableSet : NSObject {

	NSMutableSet* _set;
	NSMutableDictionary* _recentTouches;
	double _secondsToExpire;

}
-(BOOL)containsObject:(id)arg1 ;
-(void)_touch:(id)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(id)initWithSecondsToExpire:(double)arg1 ;
-(BOOL)_didExpireObject:(id)arg1 ;
-(void)dealloc;
@end

