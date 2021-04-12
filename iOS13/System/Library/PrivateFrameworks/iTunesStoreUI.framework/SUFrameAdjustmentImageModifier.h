/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUImageModifier.h>

@interface SUFrameAdjustmentImageModifier : SUImageModifier {

	BOOL _shouldSizeDownToFit;
	unsigned long long _sizingMask;

}

@property (assign,nonatomic) BOOL shouldSizeDownToFit;                   //@synthesize shouldSizeDownToFit=_shouldSizeDownToFit - In the implementation block
@property (assign,nonatomic) unsigned long long sizingMask;              //@synthesize sizingMask=_sizingMask - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)scalesImage;
-(CGRect)imageFrameForImage:(id)arg1 currentFrame:(CGRect)arg2 finalSize:(CGSize)arg3 ;
-(unsigned long long)sizingMask;
-(void)setSizingMask:(unsigned long long)arg1 ;
-(BOOL)shouldSizeDownToFit;
-(void)setShouldSizeDownToFit:(BOOL)arg1 ;
@end

