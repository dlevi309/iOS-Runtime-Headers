/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKCFaceDetailEditOptionCell.h>

@protocol NTKCFaceDetailKaleidoscopeEditOptionCellDelegate;
@interface NTKCFaceDetailKaleidoscopeEditOptionCell : NTKCFaceDetailEditOptionCell {

	id<NTKCFaceDetailKaleidoscopeEditOptionCellDelegate> delegate;
	long long _userOptionIndex;

}

@property (assign,nonatomic,__weak) id<NTKCFaceDetailKaleidoscopeEditOptionCellDelegate> delegate; 
@property (assign,nonatomic) long long userOptionIndex;                                                         //@synthesize userOptionIndex=_userOptionIndex - In the implementation block
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id<NTKCFaceDetailKaleidoscopeEditOptionCellDelegate>)delegate;
-(void)setDelegate:(id<NTKCFaceDetailKaleidoscopeEditOptionCellDelegate>)arg1 ;
-(void)_setupFromCollection;
-(void)setUserOptionIndex:(long long)arg1 ;
-(void)selectUserOption;
-(long long)userOptionIndex;
@end

