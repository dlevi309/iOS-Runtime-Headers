/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@interface PVNCLCTriplet : NSObject {

	int _hgColorPrimary;
	int _hgTransferFunction;
	int _hgYCbCrMatrix;
	CFStringRef _colorPrimary;
	CFStringRef _transferFunction;
	CFStringRef _ycbcrMatrix;

}

@property (nonatomic,readonly) int hgColorPrimary;                        //@synthesize hgColorPrimary=_hgColorPrimary - In the implementation block
@property (nonatomic,readonly) int hgTransferFunction;                    //@synthesize hgTransferFunction=_hgTransferFunction - In the implementation block
@property (nonatomic,readonly) int hgYCbCrMatrix;                         //@synthesize hgYCbCrMatrix=_hgYCbCrMatrix - In the implementation block
@property (nonatomic,readonly) CFStringRef colorPrimary;                  //@synthesize colorPrimary=_colorPrimary - In the implementation block
@property (nonatomic,readonly) CFStringRef transferFunction;              //@synthesize transferFunction=_transferFunction - In the implementation block
@property (nonatomic,readonly) CFStringRef ycbcrMatrix;                   //@synthesize ycbcrMatrix=_ycbcrMatrix - In the implementation block
-(BOOL)isInvalid;
-(CFStringRef)colorPrimary;
-(CFStringRef)ycbcrMatrix;
-(CFStringRef)transferFunction;
-(int)hgColorPrimary;
-(int)hgTransferFunction;
-(int)hgYCbCrMatrix;
-(id)initWithColorPrimaryStr:(CFStringRef)arg1 hgColorPrimary:(int)arg2 transferFunctionStr:(CFStringRef)arg3 hgTransformFunction:(int)arg4 ycbcrMatrixStr:(CFStringRef)arg5 hgYCbCrMatrix:(int)arg6 ;
@end

