/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setDelegate:(id<NTKCFaceDetailActionSectionDelegate>)arg1 ;
-(void)_commonInit;
-(long long)numberOfRows;
-(id)cellForRow:(long long)arg1 ;
-(double)heightForRow:(long long)arg1 ;
-(void)didSelectRow:(long long)arg1 ;
-(void)setSelectCell:(NTKCFaceDetailActionCell *)arg1 ;
-(void)setDeleteCell:(NTKCFaceDetailActionCell *)arg1 ;
-(id)_spacerCell;
-(long long)_actionForRow:(long long)arg1 ;
-(BOOL)_canSelectRow:(long long)arg1 ;
-(NTKCFaceDetailActionCell *)selectCell;
-(NTKCFaceDetailActionCell *)deleteCell;
@end

