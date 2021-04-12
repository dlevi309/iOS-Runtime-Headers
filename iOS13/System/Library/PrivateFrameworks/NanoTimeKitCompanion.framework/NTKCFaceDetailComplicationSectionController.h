/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKCFaceDetailSectionController.h>
#import <libobjc.A.dylib/NTKCFaceDetailComplicationPickerCellDelegate.h>

@protocol NTKCFaceDetailComplicationSectionDelegate;
@class NTKFaceView, NTKCFaceDetailComplicationPickerCell, NTKCFaceDetailComplicationsHiddenCell, NSSet, NSMutableArray, NSString;

@interface NTKCFaceDetailComplicationSectionController : NTKCFaceDetailSectionController <NTKCFaceDetailComplicationPickerCellDelegate> {

	id<NTKCFaceDetailComplicationSectionDelegate> _delegate;
	NTKFaceView* _faceView;
	NTKCFaceDetailComplicationPickerCell* _pickerCell;
	NTKCFaceDetailComplicationPickerCell* _dismissingPickerCell;
	NTKCFaceDetailComplicationsHiddenCell* _hiddenCell;
	NSSet* _richComplicationSlots;

}

@property (nonatomic,retain) NTKFaceView * faceView;                                                     //@synthesize faceView=_faceView - In the implementation block
@property (nonatomic,retain) NSMutableArray * rows; 
@property (nonatomic,retain) NTKCFaceDetailComplicationPickerCell * pickerCell;                          //@synthesize pickerCell=_pickerCell - In the implementation block
@property (nonatomic,retain) NTKCFaceDetailComplicationPickerCell * dismissingPickerCell;                //@synthesize dismissingPickerCell=_dismissingPickerCell - In the implementation block
@property (nonatomic,retain) NTKCFaceDetailComplicationsHiddenCell * hiddenCell;                         //@synthesize hiddenCell=_hiddenCell - In the implementation block
@property (nonatomic,retain) NSSet * richComplicationSlots;                                              //@synthesize richComplicationSlots=_richComplicationSlots - In the implementation block
@property (assign,nonatomic,__weak) id<NTKCFaceDetailComplicationSectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)hasComplicationsForFace:(id)arg1 ;
-(id<NTKCFaceDetailComplicationSectionDelegate>)delegate;
-(void)setDelegate:(id<NTKCFaceDetailComplicationSectionDelegate>)arg1 ;
-(void)_commonInit;
-(double)heightForRow:(long long)arg1 ;
-(id)titleForHeader;
-(NTKFaceView *)faceView;
-(void)setFaceView:(NTKFaceView *)arg1 ;
-(void)complicationPickerCell:(id)arg1 didSelectComplication:(id)arg2 ;
-(void)faceDidChange;
-(void)didSelectRow:(long long)arg1 ;
-(BOOL)_canSelectRow:(long long)arg1 ;
-(id)initWithTableViewController:(id)arg1 face:(id)arg2 faceView:(id)arg3 inGallery:(BOOL)arg4 ;
-(NSSet *)richComplicationSlots;
-(void)_addComplication:(id)arg1 ;
-(void)toggleRow:(long long)arg1 shouldScroll:(BOOL)arg2 ;
-(void)setDismissingPickerCell:(NTKCFaceDetailComplicationPickerCell *)arg1 ;
-(void)setPickerCell:(NTKCFaceDetailComplicationPickerCell *)arg1 ;
-(void)_dequeuePickerCellForRow:(long long)arg1 ;
-(void)setHiddenCell:(NTKCFaceDetailComplicationsHiddenCell *)arg1 ;
-(void)_refreshPickerCellIfNeededForSelectedRow:(long long)arg1 ;
-(NTKCFaceDetailComplicationPickerCell *)pickerCell;
-(NTKCFaceDetailComplicationPickerCell *)dismissingPickerCell;
-(NTKCFaceDetailComplicationsHiddenCell *)hiddenCell;
-(void)setRichComplicationSlots:(NSSet *)arg1 ;
@end

