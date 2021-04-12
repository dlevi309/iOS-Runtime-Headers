/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIDocumentUIConfigurationModal.h>

@interface VUIDocumentUIConfigurationFormSheet : VUIDocumentUIConfigurationModal {

	BOOL _tapDissmissable;
	CGSize _preferredSize;

}

@property (assign,nonatomic) CGSize preferredSize;                                       //@synthesize preferredSize=_preferredSize - In the implementation block
@property (assign,getter=isTapDissmissable,nonatomic) BOOL tapDissmissable;              //@synthesize tapDissmissable=_tapDissmissable - In the implementation block
-(CGSize)preferredSize;
-(void)setPreferredSize:(CGSize)arg1 ;
-(BOOL)isTapDissmissable;
-(void)setTapDissmissable:(BOOL)arg1 ;
@end

