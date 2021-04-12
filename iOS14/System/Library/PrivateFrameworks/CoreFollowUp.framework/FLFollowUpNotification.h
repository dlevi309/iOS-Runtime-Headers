/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, FLFollowUpAction, NSSet;

@interface FLFollowUpNotification : NSObject <NSSecureCoding> {

	NSString* _title;
	NSString* _informativeText;
	NSDate* _creationDate;
	FLFollowUpAction* _activateAction;
	FLFollowUpAction* _clearAction;
	NSString* _unlockActionLabel;
	double _frequency;
	double _firstNotificationDelay;
	NSSet* _options;
	unsigned long long _sqlID;
	NSDate* _previousNotificationActionDate;
	FLFollowUpAction* _dismissAction;

}

@property (assign,nonatomic) unsigned long long sqlID;                             //@synthesize sqlID=_sqlID - In the implementation block
@property (nonatomic,retain) NSDate * previousNotificationActionDate;              //@synthesize previousNotificationActionDate=_previousNotificationActionDate - In the implementation block
@property (nonatomic,retain) FLFollowUpAction * dismissAction;                     //@synthesize dismissAction=_dismissAction - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                                //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * informativeText;                             //@synthesize informativeText=_informativeText - In the implementation block
@property (nonatomic,retain) FLFollowUpAction * activateAction;                    //@synthesize activateAction=_activateAction - In the implementation block
@property (nonatomic,retain) FLFollowUpAction * clearAction;                       //@synthesize clearAction=_clearAction - In the implementation block
@property (nonatomic,copy) NSString * unlockActionLabel;                           //@synthesize unlockActionLabel=_unlockActionLabel - In the implementation block
@property (assign,nonatomic) double frequency;                                     //@synthesize frequency=_frequency - In the implementation block
@property (assign,nonatomic) double firstNotificationDelay;                        //@synthesize firstNotificationDelay=_firstNotificationDelay - In the implementation block
@property (nonatomic,copy) NSSet * options;                                        //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) BOOL forceDelivery; 
+(BOOL)supportsSecureCoding;
+(id)defaultOptions;
-(void)setFrequency:(double)arg1 ;
-(double)frequency;
-(id)init;
-(NSString *)unlockActionLabel;
-(unsigned long long)sqlID;
-(void)setFirstNotificationDelay:(double)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSSet *)options;
-(void)setClearAction:(FLFollowUpAction *)arg1 ;
-(void)setOptions:(NSSet *)arg1 ;
-(id)_optionsData;
-(id)description;
-(NSDate *)creationDate;
-(void)setDismissAction:(FLFollowUpAction *)arg1 ;
-(FLFollowUpAction *)dismissAction;
-(void)setUnlockActionLabel:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(FLFollowUpAction *)activateAction;
-(void)setActivateAction:(FLFollowUpAction *)arg1 ;
-(NSString *)informativeText;
-(void)setInformativeText:(NSString *)arg1 ;
-(NSString *)title;
-(void)setSqlID:(unsigned long long)arg1 ;
-(BOOL)_shouldDeliverNotificationWithStringOut:(id*)arg1 ;
-(double)_frequencyDelta;
-(double)_creationDateAugmentedRepeatTimer;
-(BOOL)shouldDeliverNotification;
-(void)setForceDelivery:(BOOL)arg1 ;
-(BOOL)forceDelivery;
-(void)set_optionsData:(id)arg1 ;
-(void)recalculateActionDateToAccountForDelay;
-(FLFollowUpAction *)clearAction;
-(double)firstNotificationDelay;
-(NSDate *)previousNotificationActionDate;
-(void)setPreviousNotificationActionDate:(NSDate *)arg1 ;
@end

