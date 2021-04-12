/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUItemCellConfiguration.h>

@interface SUMediaItemCellConfiguration : SUItemCellConfiguration

@property (nonatomic,readonly) CGSize artworkSize; 
@property (nonatomic,readonly) long long mediaIconType; 
@property (nonatomic,readonly) BOOL showContentRating; 
+(id)copyDefaultContext;
-(CGSize)artworkSize;
-(void)drawWithModifiers:(unsigned long long)arg1 ;
-(id)fontForLabelAtIndex:(unsigned long long)arg1 ;
-(double)alphaForImageAtIndex:(unsigned long long)arg1 fromAlpha:(double*)arg2 withModifiers:(unsigned long long)arg3 ;
-(double)alphaForLabelAtIndex:(unsigned long long)arg1 fromAlpha:(double*)arg2 withModifiers:(unsigned long long)arg3 ;
-(void)reloadImages;
-(void)reloadStrings;
-(void)reloadLayoutInformation;
-(id)initWithStringCount:(unsigned long long)arg1 imageCount:(unsigned long long)arg2 ;
-(id)copyImageDataProvider;
-(UIEdgeInsets)_ratingBorderInsets;
-(long long)mediaIconType;
-(BOOL)showContentRating;
@end

