/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXUIViewBasicTile.h>
#import <libobjc.A.dylib/PXReusableObject.h>

@protocol PXUIButtonTileDelegate;
@class NSString, UIView, UIButton, PXButtonSpec, NSArray;

@interface PXUIButtonTile : NSObject <PXUIViewBasicTile, PXReusableObject> {

	BOOL _hasScheduledUpdate;
	SCD_Struct_PX38 _needsUpdateFlags;
	id<PXUIButtonTileDelegate> _delegate;
	NSString* _title;
	UIView* __view;
	UIButton* __button;
	PXButtonSpec* __spec;
	NSArray* __layoutConstraints;

}

@property (nonatomic,readonly) UIView * _view;                                                      //@synthesize _view=__view - In the implementation block
@property (nonatomic,readonly) UIButton * _button;                                                  //@synthesize _button=__button - In the implementation block
@property (setter=_setSpec:,nonatomic,retain) PXButtonSpec * _spec;                                 //@synthesize _spec=__spec - In the implementation block
@property (setter=_setLayoutConstraints:,nonatomic,copy) NSArray * _layoutConstraints;              //@synthesize _layoutConstraints=__layoutConstraints - In the implementation block
@property (assign,nonatomic,__weak) id<PXUIButtonTileDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * title;                                                        //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UIView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)_view;
-(void)becomeReusable;
-(PXButtonSpec *)_spec;
-(UIButton *)_button;
-(id)init;
-(void)_handleButton:(id)arg1 ;
-(id<PXUIButtonTileDelegate>)delegate;
-(void)setTitle:(NSString *)arg1 ;
-(void)_updateIfNeeded;
-(void)prepareForReuse;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
-(NSArray *)_layoutConstraints;
-(void)_setSpec:(id)arg1 ;
-(void)setDelegate:(id<PXUIButtonTileDelegate>)arg1 ;
-(UIView *)view;
-(void)_setLayoutConstraints:(id)arg1 ;
-(BOOL)_needsUpdate;
-(void)_invalidateButton;
-(void)_updateButtonIfNeeded;
-(void)_setNeedsUpdate;
-(NSString *)title;
@end

