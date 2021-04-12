/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXMosaicGalleryGroupLayout.h>

@interface SXMosaicGalleryHorizontalLivingRoomLayout : SXMosaicGalleryGroupLayout {

	BOOL _reverseLayout;

}

@property (assign,nonatomic) BOOL reverseLayout;              //@synthesize reverseLayout=_reverseLayout - In the implementation block
-(double)calculateHeight;
-(double)desiredHeightForLargeItem;
-(double)desiredHeightForSmallerItems;
-(NSRange)columnRangeForItem:(id)arg1 ;
-(NSRange)columnRangeForLargeItem;
-(NSRange)columnRangeForSmallerItems;
-(unsigned long long)indexOfLargeItem;
-(BOOL)reverseLayout;
-(id)calculateFrames;
-(void)setReverseLayout:(BOOL)arg1 ;
@end

