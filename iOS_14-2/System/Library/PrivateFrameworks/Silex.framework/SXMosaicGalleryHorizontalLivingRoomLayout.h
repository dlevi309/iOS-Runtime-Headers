/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXMosaicGalleryGroupLayout.h>

@interface SXMosaicGalleryHorizontalLivingRoomLayout : SXMosaicGalleryGroupLayout {

	BOOL _reverseLayout;

}

@property (assign,nonatomic) BOOL reverseLayout;              //@synthesize reverseLayout=_reverseLayout - In the implementation block
-(double)desiredHeightForLargeItem;
-(double)desiredHeightForSmallerItems;
-(NSRange)columnRangeForItem:(id)arg1 ;
-(NSRange)columnRangeForLargeItem;
-(NSRange)columnRangeForSmallerItems;
-(unsigned long long)indexOfLargeItem;
-(BOOL)reverseLayout;
-(double)calculateHeight;
-(id)calculateFrames;
-(void)setReverseLayout:(BOOL)arg1 ;
@end

