/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
*/


@class NSString, NSArray;

@interface MSRadarURLBuilder : NSObject {

	BOOL _prependSystemVersionToTitle;
	BOOL _appendStandardDisclaimerToDescription;
	BOOL _appendSysdiagnoseHowTo;
	NSString* _title;
	NSString* _radarDescription;
	long long _component;
	long long _reproducibility;
	long long _classification;
	NSArray* _extensionIdentifiers;

}

@property (nonatomic,copy) NSString * title;                                          //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL prependSystemVersionToTitle;                        //@synthesize prependSystemVersionToTitle=_prependSystemVersionToTitle - In the implementation block
@property (nonatomic,copy) NSString * radarDescription;                               //@synthesize radarDescription=_radarDescription - In the implementation block
@property (assign,nonatomic) BOOL appendStandardDisclaimerToDescription;              //@synthesize appendStandardDisclaimerToDescription=_appendStandardDisclaimerToDescription - In the implementation block
@property (assign,nonatomic) BOOL appendSysdiagnoseHowTo;                             //@synthesize appendSysdiagnoseHowTo=_appendSysdiagnoseHowTo - In the implementation block
@property (assign,nonatomic) long long component;                                     //@synthesize component=_component - In the implementation block
@property (assign,nonatomic) long long reproducibility;                               //@synthesize reproducibility=_reproducibility - In the implementation block
@property (assign,nonatomic) long long classification;                                //@synthesize classification=_classification - In the implementation block
@property (nonatomic,copy) NSArray * extensionIdentifiers;                            //@synthesize extensionIdentifiers=_extensionIdentifiers - In the implementation block
+(id)radarURLWithBuilder:(/*^block*/id)arg1 ;
+(id)_componentInfoDictionaryFromComponent:(long long)arg1 ;
+(id)stringFromRadarClassification:(long long)arg1 ;
+(id)stringFromRadarReproducibility:(long long)arg1 ;
+(id)_URLFromQueryItems:(id)arg1 builder:(id)arg2 ;
+(BOOL)canOpenRadar;
+(id)componentNameFromRadarComponent:(long long)arg1 ;
+(id)componentIDFromRadarComponent:(long long)arg1 ;
-(id)init;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(long long)component;
-(void)setComponent:(long long)arg1 ;
-(long long)classification;
-(NSArray *)extensionIdentifiers;
-(void)setExtensionIdentifiers:(NSArray *)arg1 ;
-(void)setClassification:(long long)arg1 ;
-(NSString *)radarDescription;
-(BOOL)prependSystemVersionToTitle;
-(BOOL)appendStandardDisclaimerToDescription;
-(BOOL)appendSysdiagnoseHowTo;
-(void)setRadarDescription:(NSString *)arg1 ;
-(long long)reproducibility;
-(void)setPrependSystemVersionToTitle:(BOOL)arg1 ;
-(void)setAppendStandardDisclaimerToDescription:(BOOL)arg1 ;
-(void)setAppendSysdiagnoseHowTo:(BOOL)arg1 ;
-(void)setReproducibility:(long long)arg1 ;
@end

