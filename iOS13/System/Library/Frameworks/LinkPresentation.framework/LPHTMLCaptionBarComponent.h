/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LPHTMLComponent.h>

@class LPCaptionBarStyle, LPCaptionBarPresentationProperties;

@interface LPHTMLCaptionBarComponent : LPHTMLComponent {

	LPCaptionBarStyle* _style;
	LPCaptionBarPresentationProperties* _presentationProperties;
	BOOL _useProgressSpinner;

}
+(id)ruleDictionaryForStyle:(id)arg1 ;
+(id)styleSet;
+(id)baseRules;
+(id)additionalRulesForStyle:(id)arg1 ;
-(void)buildComponents;
-(id)initWithStyle:(id)arg1 presentationProperties:(id)arg2 useProgressSpinner:(BOOL)arg3 themePath:(id)arg4 generator:(id)arg5 ;
@end

