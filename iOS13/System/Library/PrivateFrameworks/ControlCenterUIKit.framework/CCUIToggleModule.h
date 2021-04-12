/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleContentViewController> contentViewController; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleBackgroundViewController> backgroundViewController; 
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)refreshState;
-(UIColor *)selectedColor;
-(CCUICAPackageDescription *)glyphPackageDescription;
-(NSString *)glyphState;
-(double)glyphScale;
-(CCUIContentModuleContext *)contentModuleContext;
-(void)setContentModuleContext:(CCUIContentModuleContext *)arg1 ;
-(void)reconfigureView;
-(id)contentViewControllerForContext:(id)arg1 ;
-(UIImage *)iconGlyph;
-(UIImage *)selectedIconGlyph;
-(id)glyphPackage;
@end

