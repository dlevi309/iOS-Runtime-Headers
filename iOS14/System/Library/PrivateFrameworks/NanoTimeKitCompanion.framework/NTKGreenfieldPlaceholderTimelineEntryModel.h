/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@class UIImage, NSString;

@interface NTKGreenfieldPlaceholderTimelineEntryModel : NTKTimelineEntryModel {

	unsigned long long _modelState;
	UIImage* _appIcon;
	NSString* _appName;
	double _installationProgress;

}
+(id)placeholderImageForFamily:(long long)arg1 ;
+(id)entryModelWithNullState;
+(id)entryModelWithAppIcon:(id)arg1 appName:(id)arg2 installationProgress:(float)arg3 ;
-(id)_installationTemplateForComplicationFamily:(long long)arg1 ;
-(id)_graphicRectangularTemplateForInstallation;
-(id)_utilitarianSmallFlatTemplateForInstallation;
-(id)_utilitarianLargeTemplateForInstallation;
-(id)_graphicCircularTemplateForInstallation;
-(id)_modularSmallTemplateForInstallation;
-(id)_modularLargeTemplateForInstallation;
-(id)_circularSmallTemplateForInstallation;
-(id)_graphicCornerTemplateForInstallation;
-(id)_graphicBezelTemplateForInstallation;
-(id)_extraLargeTemplateForInstallation;
-(id)_graphicExtraLargeTemplateForInstallation;
-(id)_downloadTextWithIsUpperCased:(BOOL)arg1 ;
-(id)_placeholderFullColorImageProvider;
-(id)_placeholderImageProvider;
-(id)templateForComplicationFamily:(long long)arg1 ;
@end

