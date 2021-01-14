/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGLayout.h>
#import <libobjc.A.dylib/PXGViewSource.h>

@protocol PXGSingleViewLayoutDelegate;
@class NSIndexSet, UIView, PXGSpriteReference, NSString;

@interface PXGSingleViewLayout : PXGLayout <PXGViewSource> {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	unsigned short _contentSpriteMediaVersion;
	NSIndexSet* _axSpriteIndexes;
	float _zPosition;
	UIView* _contentView;
	Class _contentViewClass;
	id<PXGSingleViewLayoutDelegate> _delegate;
	long long _style;
	UIEdgeInsets _padding;

}

@property (nonatomic,retain) UIView * contentView;                                         //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) Class contentViewClass;                                       //@synthesize contentViewClass=_contentViewClass - In the implementation block
@property (assign,nonatomic,__weak) id<PXGSingleViewLayoutDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long style;                                              //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                                         //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) float zPosition;                                              //@synthesize zPosition=_zPosition - In the implementation block
@property (nonatomic,readonly) PXGSpriteReference * viewSpriteReference; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewSizeDidChange;
-(void)alphaDidChange;
-(void)screenScaleDidChange;
-(id)init;
-(id<PXGSingleViewLayoutDelegate>)delegate;
-(Class)viewClassForSpriteAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(void)setZPosition:(float)arg1 ;
-(PXGSpriteReference *)viewSpriteReference;
-(void)_invalidateContent;
-(void)_invalidateMediaVersion;
-(id)axSpriteIndexesInRect:(CGRect)arg1 ;
-(void)setDelegate:(id<PXGSingleViewLayoutDelegate>)arg1 ;
-(void)update;
-(id)hitTestResultForSpriteIndex:(unsigned)arg1 ;
-(id)viewUserDataForSpriteAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(void)referenceSizeDidChange;
-(void)setContentView:(UIView *)arg1 ;
-(void)setContentViewClass:(Class)arg1 ;
-(void)_updateContent;
-(UIEdgeInsets)padding;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(id)axSpriteIndexes;
-(UIView *)contentView;
-(void)viewContentDidChange;
-(long long)style;
-(Class)contentViewClass;
-(float)zPosition;
@end

