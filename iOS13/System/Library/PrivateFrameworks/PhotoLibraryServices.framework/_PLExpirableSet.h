/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSMutableSet, NSMutableDictionary;

@interface _PLExpirableSet : NSObject {

	NSMutableSet* _set;
	NSMutableDictionary* _recentTouches;
	double _secondsToExpire;

}
-(void)dealloc;
-(void)addObject:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(id)initWithSecondsToExpire:(double)arg1 ;
-(void)_touch:(id)arg1 ;
-(BOOL)_didExpireObject:(id)arg1 ;
@end

