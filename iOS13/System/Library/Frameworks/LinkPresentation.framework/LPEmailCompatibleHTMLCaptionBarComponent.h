/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LPHTMLComponent.h>

@class LPCaptionBarStyle, LPCaptionBarPresentationProperties;

@interface LPEmailCompatibleHTMLCaptionBarComponent : LPHTMLComponent {

	LPCaptionBarStyle* _style;
	LPCaptionBarPresentationProperties* _presentationProperties;

}
+(id)ruleDictionaryForStyle:(id)arg1 ;
+(id)styleSet;
+(id)ruleDictionaryForStyleWithDarkInterface:(id)arg1 ;
+(id)baseRules;
-(void)buildComponents;
-(id)initWithStyle:(id)arg1 presentationProperties:(id)arg2 themePath:(id)arg3 generator:(id)arg4 ;
@end

