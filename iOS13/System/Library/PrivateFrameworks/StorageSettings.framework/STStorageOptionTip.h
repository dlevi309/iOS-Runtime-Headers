/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)getValue:(id)arg1 ;
-(NSObject*<STStorageOptionTipDelegate>)delegate;
-(void)setDelegate:(NSObject*<STStorageOptionTipDelegate>)arg1 ;
-(void)setConfirmationText:(NSString *)arg1 ;
-(void)setConfirmationButtonTitle:(NSString *)arg1 ;
-(void)setMayCauseDataLoss:(BOOL)arg1 ;
-(void)setEventualGain:(long long)arg1 ;
-(void)setActivationPercent:(float)arg1 ;
-(NSString *)confirmationText;
-(NSString *)confirmationButtonTitle;
-(void)setValue:(id)arg1 specifier:(id)arg2 ;
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

