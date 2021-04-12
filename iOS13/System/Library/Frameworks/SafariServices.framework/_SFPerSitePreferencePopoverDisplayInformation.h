/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class NSString;

@interface _SFPerSitePreferencePopoverDisplayInformation : NSObject {

	unsigned long long _displayOption;
	NSString* _localizedDisplayName;

}

@property (nonatomic,readonly) unsigned long long displayOption;                  //@synthesize displayOption=_displayOption - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedDisplayName;              //@synthesize localizedDisplayName=_localizedDisplayName - In the implementation block
+(void)_buildMapIfNeeded;
+(id)popoverDisplayInformationForPerSitePreference:(id)arg1 ;
-(NSString *)localizedDisplayName;
-(unsigned long long)displayOption;
-(id)_initWithDisplayOption:(unsigned long long)arg1 localizedDisplayName:(id)arg2 ;
@end

