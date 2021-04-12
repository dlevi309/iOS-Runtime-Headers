/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface SBHFloatyFolderVisualConfiguration : NSObject <NSCopying, BSDescriptionProviding> {

	double _continuousCornerRadius;
	double _titleFontSizeInPortrait;
	double _titleFontSizeInLandscape;
	CGSize _contentBackgroundSize;
	CGPoint _contentBackgroundOffsetFromCenterInPortrait;
	CGPoint _contentBackgroundOffsetFromCenterInLandscape;

}

@property (assign,nonatomic) CGSize contentBackgroundSize;                                      //@synthesize contentBackgroundSize=_contentBackgroundSize - In the implementation block
@property (assign,nonatomic) double continuousCornerRadius;                                     //@synthesize continuousCornerRadius=_continuousCornerRadius - In the implementation block
@property (assign,nonatomic) CGPoint contentBackgroundOffsetFromCenterInPortrait;               //@synthesize contentBackgroundOffsetFromCenterInPortrait=_contentBackgroundOffsetFromCenterInPortrait - In the implementation block
@property (assign,nonatomic) CGPoint contentBackgroundOffsetFromCenterInLandscape;              //@synthesize contentBackgroundOffsetFromCenterInLandscape=_contentBackgroundOffsetFromCenterInLandscape - In the implementation block
@property (assign,nonatomic) double titleFontSizeInPortrait;                                    //@synthesize titleFontSizeInPortrait=_titleFontSizeInPortrait - In the implementation block
@property (assign,nonatomic) double titleFontSizeInLandscape;                                   //@synthesize titleFontSizeInLandscape=_titleFontSizeInLandscape - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(double)continuousCornerRadius;
-(void)setContinuousCornerRadius:(double)arg1 ;
-(void)setContentBackgroundSize:(CGSize)arg1 ;
-(void)setContentBackgroundOffsetFromCenterInLandscape:(CGPoint)arg1 ;
-(void)setContentBackgroundOffsetFromCenterInPortrait:(CGPoint)arg1 ;
-(void)setTitleFontSizeInAllOrientations:(double)arg1 ;
-(void)setTitleFontSizeInPortrait:(double)arg1 ;
-(void)setTitleFontSizeInLandscape:(double)arg1 ;
-(CGSize)contentBackgroundSize;
-(CGPoint)contentBackgroundOffsetFromCenterInLandscape;
-(CGPoint)contentBackgroundOffsetFromCenterInPortrait;
-(double)titleFontSizeInLandscape;
-(double)titleFontSizeInPortrait;
@end

