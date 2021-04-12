/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKCFaceDetailEditOptionSectionController.h>

@class NTKCFaceDetailDescriptionCell, NSString, NSMutableArray;

@interface NTKCFaceDetailEditOptionVerticalSectionController : NTKCFaceDetailEditOptionSectionController {

	NTKCFaceDetailDescriptionCell* _footerCell;
	NSString* _footer;

}

@property (nonatomic,retain) NSMutableArray * rows; 
@property (nonatomic,retain) NTKCFaceDetailDescriptionCell * footerCell;              //@synthesize footerCell=_footerCell - In the implementation block
@property (nonatomic,retain) NSString * footer;                                       //@synthesize footer=_footer - In the implementation block
-(long long)numberOfRows;
-(NSString *)footer;
-(void)setFooter:(NSString *)arg1 ;
-(id)cellForRow:(long long)arg1 ;
-(double)heightForRow:(long long)arg1 ;
-(void)setSelectedOptions:(id)arg1 ;
-(BOOL)collectionChanged:(id)arg1 withSelectedOptions:(id)arg2 ;
-(void)faceDidChange;
-(void)didSelectRow:(long long)arg1 ;
-(BOOL)_canSelectRow:(long long)arg1 ;
-(id)initWithTableViewController:(id)arg1 face:(id)arg2 inGallery:(BOOL)arg3 editOptionCollection:(id)arg4 faceView:(id)arg5 ;
-(void)reloadActionRow;
-(void)_setupWithCollection:(id)arg1 ;
-(id)_overrideTextForOption:(id)arg1 ;
-(NTKCFaceDetailDescriptionCell *)footerCell;
-(void)setFooterCell:(NTKCFaceDetailDescriptionCell *)arg1 ;
-(void)_refreshOverrideTexts;
@end

