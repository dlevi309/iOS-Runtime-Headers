/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
@class NSMutableDictionary;

@interface ATXGroupHistogram : NSObject {

	NSMutableDictionary* _histogram;
	BOOL _isTotalScoreValid;
	double _total;
	opaque_pthread_mutex_t _lock;

}
-(id)init;
-(void)dealloc;
-(void)addScore:(double)arg1 group:(id)arg2 ;
-(double)getScoreForGroup:(id)arg1 ;
-(double)_getTotalScore;
@end

