/*
* Generated on Monday, March 1, 2021 at 2:30:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SFCardSectionFeedback.h>

@class SFPunchout;

@interface SFCardSectionEngagementFeedback : SFCardSectionFeedback {

	SFPunchout* _destination;
	unsigned long long _triggerEvent;
	unsigned long long _actionCardType;
	unsigned long long _actionTarget;

}

@property (nonatomic,retain) SFPunchout * destination;                       //@synthesize destination=_destination - In the implementation block
@property (assign,nonatomic) unsigned long long triggerEvent;                //@synthesize triggerEvent=_triggerEvent - In the implementation block
@property (assign,nonatomic) unsigned long long actionCardType;              //@synthesize actionCardType=_actionCardType - In the implementation block
@property (assign,nonatomic) unsigned long long actionTarget;                //@synthesize actionTarget=_actionTarget - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SFPunchout *)destination;
-(void)setDestination:(SFPunchout *)arg1 ;
-(unsigned long long)actionTarget;
-(void)setActionTarget:(unsigned long long)arg1 ;
-(unsigned long long)triggerEvent;
-(void)setTriggerEvent:(unsigned long long)arg1 ;
-(id)initWithCardSection:(id)arg1 destination:(id)arg2 triggerEvent:(unsigned long long)arg3 actionCardType:(unsigned long long)arg4 ;
-(unsigned long long)actionCardType;
-(void)setActionCardType:(unsigned long long)arg1 ;
@end

