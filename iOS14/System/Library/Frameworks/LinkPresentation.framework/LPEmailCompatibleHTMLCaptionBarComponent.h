/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LPHTMLComponent.h>

@class LPCaptionBarStyle, LPCaptionBarPresentationProperties;

@interface LPEmailCompatibleHTMLCaptionBarComponent : LPHTMLComponent {

	LPCaptionBarStyle* _style;
	LPCaptionBarPresentationProperties* _presentationProperties;

}
+(id)styleSet;
+(id)baseRules;
+(id)ruleDictionaryForStyle:(id)arg1 ;
+(id)ruleDictionaryForStyleWithDarkInterface:(id)arg1 ;
-(void)buildComponents;
-(id)initWithStyle:(id)arg1 presentationProperties:(id)arg2 themePath:(id)arg3 generator:(id)arg4 ;
@end

