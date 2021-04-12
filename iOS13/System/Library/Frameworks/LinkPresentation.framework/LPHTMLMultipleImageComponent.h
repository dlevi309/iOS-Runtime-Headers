/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LPHTMLComponent.h>

@class LPImageViewStyle, NSString, NSArray;

@interface LPHTMLMultipleImageComponent : LPHTMLComponent {

	LPImageViewStyle* _style;
	NSString* _themePath;
	NSArray* _images;

}
+(id)ruleDictionaryForStyle:(id)arg1 ;
+(id)styleSet;
+(id)ruleDictionaryForStyleWithDarkInterface:(id)arg1 ;
+(id)additionalGlobalOutOfLineStyleDeclarations;
+(id)baseRules;
+(id)additionalRulesForStyle:(id)arg1 ;
-(void)buildComponents;
-(id)initWithImages:(id)arg1 style:(id)arg2 themePath:(id)arg3 generator:(id)arg4 constrainHeight:(BOOL)arg5 ;
-(void)_computeRowAndColumnSpecificationsForImages:(id)arg1 ;
@end

