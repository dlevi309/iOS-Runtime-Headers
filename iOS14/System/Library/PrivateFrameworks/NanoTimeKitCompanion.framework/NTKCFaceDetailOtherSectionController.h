/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKCFaceDetailSectionController.h>
#import <libobjc.A.dylib/NTKCFaceDetailToggleCellDelegate.h>

@protocol NTKCFaceDetailOtherSectionDelegate;
@class NTKCFaceDetailMonogramComplicationCell, NTKCFaceDetailMonogramEditCell, NTKCFaceDetailShowSecondsCell, NSString;

@interface NTKCFaceDetailOtherSectionController : NTKCFaceDetailSectionController <NTKCFaceDetailToggleCellDelegate> {

	id<NTKCFaceDetailOtherSectionDelegate> _delegate;
	NTKCFaceDetailMonogramComplicationCell* _monogramCell;
	NTKCFaceDetailMonogramEditCell* _monogramEditCell;
	NTKCFaceDetailShowSecondsCell* _showSecondsCell;

}

@property (nonatomic,retain) NTKCFaceDetailMonogramComplicationCell * monogramCell;               //@synthesize monogramCell=_monogramCell - In the implementation block
@property (nonatomic,retain) NTKCFaceDetailMonogramEditCell * monogramEditCell;                   //@synthesize monogramEditCell=_monogramEditCell - In the implementation block
@property (nonatomic,retain) NTKCFaceDetailShowSecondsCell * showSecondsCell;                     //@synthesize showSecondsCell=_showSecondsCell - In the implementation block
@property (assign,nonatomic,__weak) id<NTKCFaceDetailOtherSectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NTKCFaceDetailOtherSectionDelegate>)delegate;
-(id)titleForHeader;
-(void)setDelegate:(id<NTKCFaceDetailOtherSectionDelegate>)arg1 ;
-(void)_commonInit;
-(void)toggleCell:(id)arg1 didToggle:(BOOL)arg2 ;
-(BOOL)_canSelectRow:(long long)arg1 ;
-(void)didSelectRow:(long long)arg1 ;
-(void)addMonogramRowForSlot:(id)arg1 ;
-(void)faceDidChange;
-(void)addShowSecondsRow:(id)arg1 ;
-(void)_addMonogramEditRow;
-(void)removeMonogramRow;
-(void)setMonogramCell:(NTKCFaceDetailMonogramComplicationCell *)arg1 ;
-(void)setMonogramEditCell:(NTKCFaceDetailMonogramEditCell *)arg1 ;
-(void)removeShowSecondsRow;
-(void)setShowSecondsCell:(NTKCFaceDetailShowSecondsCell *)arg1 ;
-(void)_removeMonogramEditRow;
-(NTKCFaceDetailMonogramComplicationCell *)monogramCell;
-(NTKCFaceDetailMonogramEditCell *)monogramEditCell;
-(NTKCFaceDetailShowSecondsCell *)showSecondsCell;
@end

