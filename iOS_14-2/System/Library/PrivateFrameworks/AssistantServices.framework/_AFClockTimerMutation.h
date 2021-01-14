/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFClockTimerMutating.h>

@class AFClockTimer, NSUUID, NSURL, NSString, NSDate;

@interface _AFClockTimerMutation : NSObject <AFClockTimerMutating> {

	AFClockTimer* _baseModel;
	NSUUID* _timerID;
	NSURL* _timerURL;
	BOOL _isFiring;
	NSString* _title;
	long long _state;
	double _duration;
	long long _type;
	double _fireTimeInterval;
	NSDate* _fireDate;
	NSDate* _firedDate;
	NSDate* _dismissedDate;
	NSDate* _lastModifiedDate;
	struct {
		unsigned isDirty : 1;
		unsigned hasTimerID : 1;
		unsigned hasTimerURL : 1;
		unsigned hasIsFiring : 1;
		unsigned hasTitle : 1;
		unsigned hasState : 1;
		unsigned hasDuration : 1;
		unsigned hasType : 1;
		unsigned hasFireTimeInterval : 1;
		unsigned hasFireDate : 1;
		unsigned hasFiredDate : 1;
		unsigned hasDismissedDate : 1;
		unsigned hasLastModifiedDate : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFiredDate:(id)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setDismissedDate:(id)arg1 ;
-(id)init;
-(void)setFireDate:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(void)setLastModifiedDate:(id)arg1 ;
-(void)setState:(long long)arg1 ;
-(id)generate;
-(id)initWithBaseModel:(id)arg1 ;
-(void)setFireTimeInterval:(double)arg1 ;
-(void)setTimerID:(id)arg1 ;
-(void)setTimerURL:(id)arg1 ;
-(void)setIsFiring:(BOOL)arg1 ;
@end

