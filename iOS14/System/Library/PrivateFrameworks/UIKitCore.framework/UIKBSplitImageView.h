/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)insertSubviewAtBottom:(id)arg1 ;
-(void)prepareForDisplay:(BOOL)arg1 ;
-(void)setContentsMultiplyColor:(id)arg1 ;
-(void)setImage:(id)arg1 splitLeft:(id)arg2 splitRight:(id)arg3 keyplane:(id)arg4 ;
-(void)clearImages;
-(id)initWithFrame:(CGRect)arg1 canStretchAsFullWidth:(BOOL)arg2 ;
-(NSString *)filterType;
-(void)setFilterType:(NSString *)arg1 ;
-(void)setImage:(id)arg1 cachedWidth:(double)arg2 keyplane:(id)arg3 ;
-(BOOL)_shouldInheritScreenScaleAsContentScaleFactor;
-(void)dealloc;
@end

