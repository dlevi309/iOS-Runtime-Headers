/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(NSSet *)options;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setOptions:(NSSet *)arg1 ;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(FLFollowUpAction *)activateAction;
-(void)setActivateAction:(FLFollowUpAction *)arg1 ;
-(double)frequency;
-(void)setFrequency:(double)arg1 ;
-(void)setDismissAction:(FLFollowUpAction *)arg1 ;
-(FLFollowUpAction *)dismissAction;
-(void)setInformativeText:(NSString *)arg1 ;
-(void)setFirstNotificationDelay:(double)arg1 ;
-(id)_optionsData;
-(void)setClearAction:(FLFollowUpAction *)arg1 ;
-(NSString *)informativeText;
-(unsigned long long)sqlID;
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
-(NSString *)unlockActionLabel;
-(void)setUnlockActionLabel:(NSString *)arg1 ;
-(double)firstNotificationDelay;
-(NSDate *)previousNotificationActionDate;
-(void)setPreviousNotificationActionDate:(NSDate *)arg1 ;
@end

