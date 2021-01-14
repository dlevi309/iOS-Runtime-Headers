/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

