/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, NSString;

@interface UIKBSplitImageView : UIView {

	BOOL _canStretchAsFullWidth;
	UIImageView* _fullView;
	UIImageView* _splitLeft;
	UIImageView* _splitRight;
	NSString* _currentFilterType;

}

@property (nonatomic,retain) NSString * filterType;              //@synthesize currentFilterType=_currentFilterType - In the implementation block
-(void)dealloc;
-(NSString *)filterType;
-(void)setFilterType:(NSString *)arg1 ;
-(BOOL)_shouldInheritScreenScaleAsContentScaleFactor;
-(void)setContentsMultiplyColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 canStretchAsFullWidth:(BOOL)arg2 ;
-(void)prepareForDisplay:(BOOL)arg1 ;
-(void)insertSubviewAtBottom:(id)arg1 ;
-(void)setImage:(id)arg1 cachedWidth:(double)arg2 keyplane:(id)arg3 ;
-(void)clearImages;
-(void)setImage:(id)arg1 splitLeft:(id)arg2 splitRight:(id)arg3 keyplane:(id)arg4 ;
@end

