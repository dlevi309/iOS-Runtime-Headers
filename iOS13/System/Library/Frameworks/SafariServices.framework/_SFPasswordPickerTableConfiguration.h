/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class NSString, NSArray;

@interface _SFPasswordPickerTableConfiguration : NSObject {

	BOOL _forUserNamesOnly;
	BOOL _shouldShowIcons;
	NSString* _prompt;
	NSArray* _serviceNameHintStrings;
	NSArray* _domainHintStrings;
	unsigned long long _minimumNumberOfCredentialsToShowLikelyMatchesSection;

}

@property (nonatomic,copy) NSString * prompt;                                                                      //@synthesize prompt=_prompt - In the implementation block
@property (nonatomic,copy) NSArray * serviceNameHintStrings;                                                       //@synthesize serviceNameHintStrings=_serviceNameHintStrings - In the implementation block
@property (nonatomic,copy) NSArray * domainHintStrings;                                                            //@synthesize domainHintStrings=_domainHintStrings - In the implementation block
@property (assign,nonatomic) unsigned long long minimumNumberOfCredentialsToShowLikelyMatchesSection;              //@synthesize minimumNumberOfCredentialsToShowLikelyMatchesSection=_minimumNumberOfCredentialsToShowLikelyMatchesSection - In the implementation block
@property (assign,nonatomic) BOOL forUserNamesOnly;                                                                //@synthesize forUserNamesOnly=_forUserNamesOnly - In the implementation block
@property (assign,nonatomic) BOOL shouldShowIcons;                                                                 //@synthesize shouldShowIcons=_shouldShowIcons - In the implementation block
-(NSString *)prompt;
-(void)setPrompt:(NSString *)arg1 ;
-(BOOL)shouldShowIcons;
-(void)setShouldShowIcons:(BOOL)arg1 ;
-(NSArray *)serviceNameHintStrings;
-(void)setServiceNameHintStrings:(NSArray *)arg1 ;
-(NSArray *)domainHintStrings;
-(void)setDomainHintStrings:(NSArray *)arg1 ;
-(unsigned long long)minimumNumberOfCredentialsToShowLikelyMatchesSection;
-(void)setMinimumNumberOfCredentialsToShowLikelyMatchesSection:(unsigned long long)arg1 ;
-(BOOL)forUserNamesOnly;
-(void)setForUserNamesOnly:(BOOL)arg1 ;
@end

