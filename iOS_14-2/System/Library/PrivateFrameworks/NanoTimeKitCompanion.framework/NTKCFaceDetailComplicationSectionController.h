/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKCFaceDetailSectionController.h>

@protocol NTKCFaceDetailComplicationSectionDelegate;
@class NTKFaceView, NTKCFaceDetailComplicationsHiddenCell, NSSet, NSMutableArray;

@interface NTKCFaceDetailComplicationSectionController : NTKCFaceDetailSectionController {

	id<NTKCFaceDetailComplicationSectionDelegate> _delegate;
	NTKFaceView* _faceView;
	NTKCFaceDetailComplicationsHiddenCell* _hiddenCell;
	NSSet* _richComplicationSlots;

}

@property (nonatomic,retain) NTKFaceView * faceView;                                                     //@synthesize faceView=_faceView - In the implementation block
@property (nonatomic,retain) NSMutableArray * rows; 
@property (nonatomic,retain) NTKCFaceDetailComplicationsHiddenCell * hiddenCell;                         //@synthesize hiddenCell=_hiddenCell - In the implementation block
@property (nonatomic,retain) NSSet * richComplicationSlots;                                              //@synthesize richComplicationSlots=_richComplicationSlots - In the implementation block
@property (assign,nonatomic,__weak) id<NTKCFaceDetailComplicationSectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)hasComplicationsForFace:(id)arg1 ;
-(id<NTKCFaceDetailComplicationSectionDelegate>)delegate;
-(id)titleForHeader;
-(void)setDelegate:(id<NTKCFaceDetailComplicationSectionDelegate>)arg1 ;
-(void)_commonInit;
-(void)setFaceView:(NTKFaceView *)arg1 ;
-(NTKFaceView *)faceView;
-(BOOL)_canSelectRow:(long long)arg1 ;
-(void)didSelectRow:(long long)arg1 ;
-(id)initWithTableViewController:(id)arg1 face:(id)arg2 faceView:(id)arg3 inGallery:(BOOL)arg4 ;
-(void)faceDidChange;
-(NSSet *)richComplicationSlots;
-(void)_addComplication:(id)arg1 ;
-(void)setHiddenCell:(NTKCFaceDetailComplicationsHiddenCell *)arg1 ;
-(NTKCFaceDetailComplicationsHiddenCell *)hiddenCell;
-(void)setRichComplicationSlots:(NSSet *)arg1 ;
@end

