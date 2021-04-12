/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPrompt:(NSString *)arg1 ;
-(NSString *)prompt;
-(NSArray *)serviceNameHintStrings;
-(void)setServiceNameHintStrings:(NSArray *)arg1 ;
-(NSArray *)domainHintStrings;
-(void)setDomainHintStrings:(NSArray *)arg1 ;
-(unsigned long long)minimumNumberOfCredentialsToShowLikelyMatchesSection;
-(void)setMinimumNumberOfCredentialsToShowLikelyMatchesSection:(unsigned long long)arg1 ;
-(BOOL)forUserNamesOnly;
-(void)setForUserNamesOnly:(BOOL)arg1 ;
-(BOOL)shouldShowIcons;
-(void)setShouldShowIcons:(BOOL)arg1 ;
@end

