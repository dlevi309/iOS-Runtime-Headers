/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class NSString;

@interface _SFPerSitePreferencePopoverDisplayInformation : NSObject {

	unsigned long long _displayOption;
	NSString* _localizedDisplayName;

}

@property (nonatomic,readonly) unsigned long long displayOption;                  //@synthesize displayOption=_displayOption - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedDisplayName;              //@synthesize localizedDisplayName=_localizedDisplayName - In the implementation block
+(id)popoverDisplayInformationForPerSitePreference:(id)arg1 ;
+(void)_buildMapIfNeeded;
-(NSString *)localizedDisplayName;
-(id)_initWithDisplayOption:(unsigned long long)arg1 localizedDisplayName:(id)arg2 ;
-(unsigned long long)displayOption;
@end

