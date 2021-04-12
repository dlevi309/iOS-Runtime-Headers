/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKCFaceDetailEditOptionSectionController.h>
#import <libobjc.A.dylib/NTKCFaceDetailEditOptionCellDelegate.h>

@class NTKCFaceDetailEditOptionCell, NSMutableArray, NSString;

@interface NTKCFaceDetailEditOptionHorizontalSectionController : NTKCFaceDetailEditOptionSectionController <NTKCFaceDetailEditOptionCellDelegate>

@property (nonatomic,retain) NTKCFaceDetailEditOptionCell * cell; 
@property (nonatomic,retain) NSMutableArray * rows; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSelectedOptions:(id)arg1 ;
-(void)editOptionCell:(id)arg1 didSelectOptionAtIndex:(long long)arg2 ;
-(BOOL)collectionChanged:(id)arg1 withSelectedOptions:(id)arg2 ;
-(void)didSelectRow:(long long)arg1 ;
-(id)initWithTableViewController:(id)arg1 face:(id)arg2 inGallery:(BOOL)arg3 editOptionCollection:(id)arg4 faceView:(id)arg5 ;
-(void)reloadActionRow;
-(Class)editCellClass;
@end

