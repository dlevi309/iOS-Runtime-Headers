/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKitInternal.framework/ReminderKitInternal
*/


#import <ReminderKitInternal/ReminderKitInternal-Structs.h>
@interface TTRNLTextStructuredEventLocation : NSObject {

	long long _locationType;
	long long _proximity;
	NSRange _range;

}

@property (assign,nonatomic) NSRange range;                       //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) long long locationType;              //@synthesize locationType=_locationType - In the implementation block
@property (assign,nonatomic) long long proximity;                 //@synthesize proximity=_proximity - In the implementation block
-(void)setRange:(NSRange)arg1 ;
-(NSRange)range;
-(void)setLocationType:(long long)arg1 ;
-(id)initWithRange:(NSRange)arg1 locationType:(long long)arg2 proximity:(long long)arg3 ;
-(long long)proximity;
-(id)description;
-(long long)locationType;
-(void)setProximity:(long long)arg1 ;
@end

