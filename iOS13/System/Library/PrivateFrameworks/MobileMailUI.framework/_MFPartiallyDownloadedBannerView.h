/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
*/

#import <MobileMailUI/MobileMailUI-Structs.h>
#import <MobileMailUI/MFHasMoreContentBannerView.h>

@interface _MFPartiallyDownloadedBannerView : MFHasMoreContentBannerView {

	unsigned long long _remainingBytes;

}

@property (assign) unsigned long long remainingBytes;              //@synthesize remainingBytes=_remainingBytes - In the implementation block
-(unsigned long long)remainingBytes;
-(void)setRemainingBytes:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 remainingBytes:(unsigned long long)arg2 ;
-(id)actionStringIsDownloading:(BOOL)arg1 ;
@end

