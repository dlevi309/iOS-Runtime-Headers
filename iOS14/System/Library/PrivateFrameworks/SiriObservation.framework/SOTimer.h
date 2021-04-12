/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriObservation.framework/SiriObservation
*/

#import <SiriObservation/SiriObservation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSURL, NSString, NSDate;

@interface SOTimer : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isFiring;
	NSUUID* _timerID;
	NSURL* _timerURL;
	NSString* _title;
	long long _state;
	double _duration;
	long long _type;
	double _fireTimeInterval;
	NSDate* _fireDate;
	NSDate* _firedDate;
	NSDate* _dismissedDate;
	NSDate* _lastModifiedDate;

}

@property (nonatomic,copy,readonly) NSUUID * timerID;                       //@synthesize timerID=_timerID - In the implementation block
@property (nonatomic,copy,readonly) NSURL * timerURL;                       //@synthesize timerURL=_timerURL - In the implementation block
@property (nonatomic,readonly) BOOL isFiring;                               //@synthesize isFiring=_isFiring - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) long long state;                             //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) double duration;                             //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) long long type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) double fireTimeInterval;                     //@synthesize fireTimeInterval=_fireTimeInterval - In the implementation block
@property (nonatomic,copy,readonly) NSDate * fireDate;                      //@synthesize fireDate=_fireDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * firedDate;                     //@synthesize firedDate=_firedDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * dismissedDate;                 //@synthesize dismissedDate=_dismissedDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastModifiedDate;              //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(NSDate *)firedDate;
-(BOOL)isFiring;
-(NSDate *)fireDate;
-(NSDate *)dismissedDate;
-(NSUUID *)timerID;
-(NSDate *)lastModifiedDate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSURL *)timerURL;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(long long)state;
-(double)duration;
-(double)fireTimeInterval;
-(id)initWithTimerID:(id)arg1 timerURL:(id)arg2 isFiring:(BOOL)arg3 title:(id)arg4 state:(long long)arg5 duration:(double)arg6 type:(long long)arg7 fireTimeInterval:(double)arg8 fireDate:(id)arg9 firedDate:(id)arg10 dismissedDate:(id)arg11 lastModifiedDate:(id)arg12 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

