/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
*/

#import <StorageSettings/STStorageTip.h>

@protocol STStorageOptionTipDelegate;
@class NSObject, NSString;

@interface STStorageOptionTip : STStorageTip {

	BOOL _mayCauseDataLoss;
	NSObject*<STStorageOptionTipDelegate> _delegate;
	NSString* _confirmationText;
	NSString* _confirmationButtonTitle;

}

@property (__weak) NSObject*<STStorageOptionTipDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSString * enableButtonTitle; 
@property (assign,nonatomic) float activationPercent; 
@property (nonatomic,retain) NSString * activatingString; 
@property (assign,nonatomic) long long immediateGain; 
@property (assign,nonatomic) long long eventualGain; 
@property (assign) BOOL mayCauseDataLoss;                                       //@synthesize mayCauseDataLoss=_mayCauseDataLoss - In the implementation block
@property (retain) NSString * confirmationText;                                 //@synthesize confirmationText=_confirmationText - In the implementation block
@property (retain) NSString * confirmationButtonTitle;                          //@synthesize confirmationButtonTitle=_confirmationButtonTitle - In the implementation block
-(void)setConfirmationText:(NSString *)arg1 ;
-(void)setEventualGain:(long long)arg1 ;
-(void)setConfirmationButtonTitle:(NSString *)arg1 ;
-(void)setMayCauseDataLoss:(BOOL)arg1 ;
-(void)setActivationPercent:(float)arg1 ;
-(id)init;
-(NSObject*<STStorageOptionTipDelegate>)delegate;
-(void)setDelegate:(NSObject*<STStorageOptionTipDelegate>)arg1 ;
-(id)getValue:(id)arg1 ;
-(NSString *)confirmationText;
-(void)setValue:(id)arg1 specifier:(id)arg2 ;
-(NSString *)confirmationButtonTitle;
-(BOOL)mayCauseDataLoss;
-(void)enableOption;
-(float)activationPercent;
-(void)setEnableButtonTitle:(NSString *)arg1 ;
-(NSString *)enableButtonTitle;
-(void)setActivatingString:(NSString *)arg1 ;
-(NSString *)activatingString;
-(long long)immediateGain;
-(void)setImmediateGain:(long long)arg1 ;
-(long long)eventualGain;
@end

