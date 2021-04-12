/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFItemResultComponent.h>

@class HMSymptom, NSString, NSURL;

@interface HFErrorResultComponent : HFItemResultComponent {

	BOOL _updateInProgress;
	unsigned long long _category;
	HMSymptom* _underlyingSymptom;
	NSString* _errorDescription;
	NSString* _detailedErrorDescription;
	long long _displayPriority;
	unsigned long long _badgeType;
	NSString* _errorMessageTitle;
	NSString* _errorMessageButtonTitle;
	NSURL* _errorHandlerURL;
	NSString* _errorHandlerURLText;

}

@property (nonatomic,readonly) unsigned long long category;                  //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) HMSymptom * underlyingSymptom;                  //@synthesize underlyingSymptom=_underlyingSymptom - In the implementation block
@property (nonatomic,copy) NSString * errorDescription;                      //@synthesize errorDescription=_errorDescription - In the implementation block
@property (nonatomic,copy) NSString * detailedErrorDescription;              //@synthesize detailedErrorDescription=_detailedErrorDescription - In the implementation block
@property (assign,nonatomic) long long displayPriority;                      //@synthesize displayPriority=_displayPriority - In the implementation block
@property (assign,nonatomic) unsigned long long badgeType;                   //@synthesize badgeType=_badgeType - In the implementation block
@property (nonatomic,copy) NSString * errorMessageTitle;                     //@synthesize errorMessageTitle=_errorMessageTitle - In the implementation block
@property (nonatomic,copy) NSString * errorMessageButtonTitle;               //@synthesize errorMessageButtonTitle=_errorMessageButtonTitle - In the implementation block
@property (nonatomic,copy) NSURL * errorHandlerURL;                          //@synthesize errorHandlerURL=_errorHandlerURL - In the implementation block
@property (nonatomic,copy) NSString * errorHandlerURLText;                   //@synthesize errorHandlerURLText=_errorHandlerURLText - In the implementation block
@property (assign,nonatomic) BOOL updateInProgress;                          //@synthesize updateInProgress=_updateInProgress - In the implementation block
+(id)componentForDisplayError:(id)arg1 symptomContextProvider:(id)arg2 ;
+(id)componentForWriteErrorForCharacteristics:(id)arg1 valueSource:(id)arg2 ;
+(id)componentForAccessoryReprovisionState:(unsigned long long)arg1 ;
+(long long)priorityForCategory:(unsigned long long)arg1 ;
+(id)componentForUnreachableAccessoryWithContextProvider:(id)arg1 ;
+(id)componentForSymptom:(id)arg1 contextProvider:(id)arg2 ;
+(BOOL)_requiresManualFixOptionToDisplaySymptom:(id)arg1 ;
+(long long)_displayPriorityForSymptom:(id)arg1 ;
-(id)init;
-(unsigned long long)category;
-(id)results;
-(id)initWithCategory:(unsigned long long)arg1 ;
-(NSString *)errorDescription;
-(void)setErrorDescription:(NSString *)arg1 ;
-(void)setUpdateInProgress:(BOOL)arg1 ;
-(void)setDisplayPriority:(long long)arg1 ;
-(long long)displayPriority;
-(void)setBadgeType:(unsigned long long)arg1 ;
-(unsigned long long)badgeType;
-(long long)componentPriority;
-(void)setUnderlyingSymptom:(HMSymptom *)arg1 ;
-(HMSymptom *)underlyingSymptom;
-(NSString *)detailedErrorDescription;
-(NSString *)errorMessageTitle;
-(NSString *)errorMessageButtonTitle;
-(NSURL *)errorHandlerURL;
-(NSString *)errorHandlerURLText;
-(BOOL)updateInProgress;
-(void)setDetailedErrorDescription:(NSString *)arg1 ;
-(void)setErrorMessageTitle:(NSString *)arg1 ;
-(void)setErrorMessageButtonTitle:(NSString *)arg1 ;
-(void)setErrorHandlerURL:(NSURL *)arg1 ;
-(void)setErrorHandlerURLText:(NSString *)arg1 ;
-(void)_addAccountSymptomMessageForAccountName:(id)arg1 symptom:(id)arg2 ;
@end

