/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKCFaceDetailSectionController.h>

@protocol NTKCFaceDetailActionSectionDelegate;
@class NTKCFaceDetailActionCell;

@interface NTKCFaceDetailActionSectionController : NTKCFaceDetailSectionController {

	id<NTKCFaceDetailActionSectionDelegate> _delegate;
	NTKCFaceDetailActionCell* _selectCell;
	NTKCFaceDetailActionCell* _deleteCell;

}

@property (nonatomic,retain) NTKCFaceDetailActionCell * selectCell;                                //@synthesize selectCell=_selectCell - In the implementation block
@property (nonatomic,retain) NTKCFaceDetailActionCell * deleteCell;                                //@synthesize deleteCell=_deleteCell - In the implementation block
@property (assign,nonatomic,__weak) id<NTKCFaceDetailActionSectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<NTKCFaceDetailActionSectionDelegate>)delegate;
-(long long)numberOfRows;
-(void)setDelegate:(id<NTKCFaceDetailActionSectionDelegate>)arg1 ;
-(id)cellForRow:(long long)arg1 ;
-(double)heightForRow:(long long)arg1 ;
-(void)_commonInit;
-(void)setSelectCell:(NTKCFaceDetailActionCell *)arg1 ;
-(void)setDeleteCell:(NTKCFaceDetailActionCell *)arg1 ;
-(id)_spacerCell;
-(long long)_actionForRow:(long long)arg1 ;
-(BOOL)_canSelectRow:(long long)arg1 ;
-(void)didSelectRow:(long long)arg1 ;
-(NTKCFaceDetailActionCell *)selectCell;
-(NTKCFaceDetailActionCell *)deleteCell;
@end

