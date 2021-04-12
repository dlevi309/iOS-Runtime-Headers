/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUPhotoEditBaseAdjustmentCell.h>

@protocol PUPhotoEditBaseAdjustmentCellDelegate;
@interface PUPhotoEditAdjustmentCell : PUPhotoEditBaseAdjustmentCell {

	BOOL _shouldDisplayValueLabel;
	id<PUPhotoEditBaseAdjustmentCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PUPhotoEditBaseAdjustmentCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayValueLabel;                                           //@synthesize shouldDisplayValueLabel=_shouldDisplayValueLabel - In the implementation block
@property (assign,nonatomic) BOOL displayMappedValue; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id<PUPhotoEditBaseAdjustmentCellDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setIsUserModifying:(BOOL)arg1 ;
-(void)setDisplayMappedValue:(BOOL)arg1 ;
-(void)setShouldDisplayValueLabel:(BOOL)arg1 ;
-(void)setImageName:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)_setupEventHandler;
-(void)_updateValueLabelVisibility;
-(BOOL)displayMappedValue;
-(void)handleButton:(id)arg1 ;
-(BOOL)shouldDisplayValueLabel;
-(void)setDelegate:(id<PUPhotoEditBaseAdjustmentCellDelegate>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

