/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUGridCellLayoutOptions.h>

@interface HUGridServiceCellLayoutOptions : HUGridCellLayoutOptions {

	BOOL _showIconOnly;
	BOOL _showDescription;
	BOOL _showAccessoryView;
	double _lineSpacing;
	double _iconToTitleSpacing;

}

@property (assign,nonatomic) double lineSpacing;                                                 //@synthesize lineSpacing=_lineSpacing - In the implementation block
@property (assign,nonatomic) double iconToTitleSpacing;                                          //@synthesize iconToTitleSpacing=_iconToTitleSpacing - In the implementation block
@property (assign,getter=shouldShowIconOnly,nonatomic) BOOL showIconOnly;                        //@synthesize showIconOnly=_showIconOnly - In the implementation block
@property (assign,getter=shouldShowDescription,nonatomic) BOOL showDescription;                  //@synthesize showDescription=_showDescription - In the implementation block
@property (assign,getter=shouldShowAccessoryView,nonatomic) BOOL showAccessoryView;              //@synthesize showAccessoryView=_showAccessoryView - In the implementation block
+(id)defaultOptionsForCellSizeSubclass:(long long)arg1 ;
-(double)lineSpacing;
-(void)setLineSpacing:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setShowDescription:(BOOL)arg1 ;
-(void)setShowAccessoryView:(BOOL)arg1 ;
-(BOOL)shouldShowIconOnly;
-(BOOL)shouldShowDescription;
-(double)iconToTitleSpacing;
-(BOOL)shouldShowAccessoryView;
-(void)setShowIconOnly:(BOOL)arg1 ;
-(void)setIconToTitleSpacing:(double)arg1 ;
@end

