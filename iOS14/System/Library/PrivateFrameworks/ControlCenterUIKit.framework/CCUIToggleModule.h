/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
*/

#import <libobjc.A.dylib/CCUIContentModule.h>

@class NSHashTable, CCUIContentModuleContext, CCUICAPackageDescription, UIImage, UIColor, NSString;

@interface CCUIToggleModule : NSObject <CCUIContentModule> {

	NSHashTable* _contentViewControllers;
	CCUIContentModuleContext* _contentModuleContext;
	CCUICAPackageDescription* _glyphPackageDescription;

}

@property (nonatomic,retain) CCUIContentModuleContext * contentModuleContext;                                                      //@synthesize contentModuleContext=_contentModuleContext - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (nonatomic,copy,readonly) UIImage * iconGlyph; 
@property (nonatomic,copy,readonly) UIImage * selectedIconGlyph; 
@property (nonatomic,copy,readonly) UIColor * selectedColor; 
@property (nonatomic,copy,readonly) CCUICAPackageDescription * glyphPackageDescription;                                            //@synthesize glyphPackageDescription=_glyphPackageDescription - In the implementation block
@property (nonatomic,copy,readonly) NSString * glyphState; 
@property (nonatomic,readonly) double glyphScale; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleContentViewController> contentViewController; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleBackgroundViewController> backgroundViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)refreshState;
-(id)contentViewControllerForContext:(id)arg1 ;
-(NSString *)glyphState;
-(BOOL)isSelected;
-(void)setContentModuleContext:(CCUIContentModuleContext *)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(CCUIContentModuleContext *)contentModuleContext;
-(CCUICAPackageDescription *)glyphPackageDescription;
-(UIColor *)selectedColor;
-(double)glyphScale;
-(void)reconfigureView;
-(UIImage *)iconGlyph;
-(UIImage *)selectedIconGlyph;
-(id)glyphPackage;
@end

