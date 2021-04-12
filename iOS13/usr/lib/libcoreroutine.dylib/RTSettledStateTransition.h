/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libobjc.A.dylib/RTCoreDataReadable.h>
#import <libobjc.A.dylib/RTCoreDataWritable.h>

@class NSDate, NSString;

@interface RTSettledStateTransition : NSObject <RTCoreDataReadable, RTCoreDataWritable> {

	NSDate* _date;
	long long _transitionFromType;
	long long _transitionToType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDate * date;                        //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) long long transitionFromType;              //@synthesize transitionFromType=_transitionFromType - In the implementation block
@property (nonatomic,readonly) long long transitionToType;                //@synthesize transitionToType=_transitionToType - In the implementation block
+(id)createWithManagedObject:(id)arg1 ;
+(id)createWithSettledStateTransitionMO:(id)arg1 ;
-(id)init;
-(NSDate *)date;
-(id)managedObjectWithContext:(id)arg1 ;
-(long long)transitionToType;
-(long long)transitionFromType;
-(id)initWithDate:(id)arg1 transitionFromType:(long long)arg2 transitionToType:(long long)arg3 ;
@end

