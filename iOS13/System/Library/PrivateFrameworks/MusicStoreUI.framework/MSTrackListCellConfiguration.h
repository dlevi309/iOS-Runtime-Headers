/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
*/

#import <MusicStoreUI/MusicStoreUI-Structs.h>
#import <iTunesStoreUI/SUMediaItemCellConfiguration.h>

@interface MSTrackListCellConfiguration : SUMediaItemCellConfiguration {

	SCD_Struct_MS0 _position;

}

@property (assign,nonatomic) SCD_Struct_MS0 position;              //@synthesize position=_position - In the implementation block
+(double)rowHeightForContext:(id)arg1 representedObject:(id)arg2 ;
+(id)copyDefaultContext;
-(id)init;
-(SCD_Struct_MS0)position;
-(void)setPosition:(SCD_Struct_MS0)arg1 ;
-(unsigned long long)indexOfLabelForPurchaseAnimation;
-(void)drawBackgroundWithModifiers:(unsigned long long)arg1 ;
-(id)fontForLabelAtIndex:(unsigned long long)arg1 ;
-(id)colorForLabelAtIndex:(unsigned long long)arg1 withModifiers:(unsigned long long)arg2 ;
-(void)reloadImages;
-(void)reloadStrings;
-(void)reloadLayoutInformation;
-(BOOL)showContentRating;
@end

