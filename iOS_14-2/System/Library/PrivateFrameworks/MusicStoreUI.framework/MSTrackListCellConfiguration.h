/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(SCD_Struct_MS0)position;
-(id)init;
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

