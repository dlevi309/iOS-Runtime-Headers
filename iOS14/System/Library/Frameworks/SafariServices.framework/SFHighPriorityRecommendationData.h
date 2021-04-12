/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol SFHighPriorityRecommendationDataDelegate;
@class SFPasswordCellData, WBSPasswordWarning, NSExtension, NSArray;

@interface SFHighPriorityRecommendationData : NSObject {

	BOOL _isUpgradeToSignInWithAppleAvailable;
	BOOL _didUpgradeToSignInWithApple;
	BOOL _didUpgradeToStrongPassword;
	SFPasswordCellData* _passwordCellData;
	WBSPasswordWarning* _warning;
	unsigned long long _eligibleAccountModificationActions;
	NSExtension* _extension;
	id<SFHighPriorityRecommendationDataDelegate> _delegate;

}

@property (nonatomic,readonly) SFPasswordCellData * passwordCellData;                                   //@synthesize passwordCellData=_passwordCellData - In the implementation block
@property (nonatomic,readonly) WBSPasswordWarning * warning;                                            //@synthesize warning=_warning - In the implementation block
@property (nonatomic,readonly) unsigned long long eligibleAccountModificationActions;                   //@synthesize eligibleAccountModificationActions=_eligibleAccountModificationActions - In the implementation block
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) NSExtension * extension;                                                 //@synthesize extension=_extension - In the implementation block
@property (nonatomic,readonly) BOOL isUpgradeToSignInWithAppleAvailable;                                //@synthesize isUpgradeToSignInWithAppleAvailable=_isUpgradeToSignInWithAppleAvailable - In the implementation block
@property (assign,nonatomic,__weak) id<SFHighPriorityRecommendationDataDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL didUpgradeToSignInWithApple;                                          //@synthesize didUpgradeToSignInWithApple=_didUpgradeToSignInWithApple - In the implementation block
@property (assign,nonatomic) BOOL didUpgradeToStrongPassword;                                           //@synthesize didUpgradeToStrongPassword=_didUpgradeToStrongPassword - In the implementation block
-(id<SFHighPriorityRecommendationDataDelegate>)delegate;
-(void)_fetchEligibleAccountModificationActionsForSavedPassword:(id)arg1 ;
-(unsigned long long)eligibleAccountModificationActions;
-(WBSPasswordWarning *)warning;
-(NSArray *)items;
-(void)setDelegate:(id<SFHighPriorityRecommendationDataDelegate>)arg1 ;
-(SFPasswordCellData *)passwordCellData;
-(id)initWithPasswordCellData:(id)arg1 warning:(id)arg2 delegate:(id)arg3 ;
-(id)cellForTableView:(id)arg1 forCellType:(id)arg2 ;
-(void)setDidUpgradeToStrongPassword:(BOOL)arg1 ;
-(BOOL)didUpgradeToSignInWithApple;
-(BOOL)didUpgradeToStrongPassword;
-(BOOL)isUpgradeToSignInWithAppleAvailable;
-(void)setDidUpgradeToSignInWithApple:(BOOL)arg1 ;
-(NSExtension *)extension;
@end

