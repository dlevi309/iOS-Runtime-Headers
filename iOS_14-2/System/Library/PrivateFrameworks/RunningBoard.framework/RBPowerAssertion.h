/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/


#import <RunningBoard/RunningBoard-Structs.h>
@class NSDate, NSString;

@interface RBPowerAssertion : NSObject {

	unsigned _identifier;
	NSDate* _acquisitionDate;
	NSString* _name;
	NSString* _baseName;
	BOOL _invalidated;
	os_unfair_lock_s _lock;

}
-(id)init;
-(id)description;
-(id)_preventIdleSleepIdentifiers;
-(int)_targetPid;
-(void)dealloc;
@end

