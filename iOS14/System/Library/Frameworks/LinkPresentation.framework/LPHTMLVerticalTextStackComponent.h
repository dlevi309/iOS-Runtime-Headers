/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LPHTMLComponent.h>

@class LPVerticalTextStackViewStyle, LPCaptionBarPresentationProperties;

@interface LPHTMLVerticalTextStackComponent : LPHTMLComponent {

	LPVerticalTextStackViewStyle* _style;
	LPCaptionBarPresentationProperties* _presentationProperties;

}
+(id)additionalRulesForStyle:(id)arg1 ;
+(id)styleSet;
+(id)baseRules;
+(id)ruleDictionaryForStyle:(id)arg1 ;
-(void)buildComponents;
-(id)initWithStyle:(id)arg1 presentationProperties:(id)arg2 themePath:(id)arg3 generator:(id)arg4 ;
-(id)componentForRow:(id)arg1 style:(id)arg2 name:(id)arg3 firstLineLeading:(double)arg4 ;
@end

