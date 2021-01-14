/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LPHTMLComponent.h>

@class LPImageViewStyle, NSString, NSArray;

@interface LPHTMLMultipleImageComponent : LPHTMLComponent {

	LPImageViewStyle* _style;
	NSString* _themePath;
	NSArray* _images;

}
+(id)additionalRulesForStyle:(id)arg1 ;
+(id)styleSet;
+(id)baseRules;
+(id)ruleDictionaryForStyle:(id)arg1 ;
+(id)ruleDictionaryForStyleWithDarkInterface:(id)arg1 ;
+(id)additionalGlobalOutOfLineStyleDeclarations;
-(void)buildComponents;
-(id)initWithImages:(id)arg1 style:(id)arg2 themePath:(id)arg3 generator:(id)arg4 constrainHeight:(BOOL)arg5 ;
-(void)_computeRowAndColumnSpecificationsForImages:(id)arg1 ;
@end

