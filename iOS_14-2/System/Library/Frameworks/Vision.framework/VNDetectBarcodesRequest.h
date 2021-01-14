/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequest.h>

@class NSString, NSArray;

@interface VNDetectBarcodesRequest : VNImageBasedRequest

@property (nonatomic,copy) NSString * locateMode; 
@property (assign,nonatomic) BOOL stopAtFirstPyramidWith2DCode; 
@property (nonatomic,copy) NSArray * symbologies; 
+(void)initialize;
+(id)barcodeSymbologyForACBSBarcodeType:(id)arg1 ;
+(id)ACBSBarcodeTypeForBarcodeSymbology:(id)arg1 ;
+(id)_allBarcodeSymbologies;
+(id)supportedSymbologies;
+(id)availableLocateModes;
+(Class)configurationClass;
+(void)recordDefaultOptionsInDictionary:(id)arg1 ;
-(id)_newVNBarcodeSymbologyQRDescriptorForACBSBarcodeInfo:(id)arg1 ;
-(void)setSymbologies:(NSArray *)arg1 ;
-(id)_newVNBarcodeSymbologyAztecDescriptorForACBSBarcodeInfo:(id)arg1 ;
-(id)_newVNBarcodeSymbologyPDF417DescriptorForACBSBarcodeInfo:(id)arg1 ;
-(int)_ACBarcodeRecognizerLocateMode;
-(ACBSConfigRef)_createACBSConfigAndReturnError:(id*)arg1 ;
-(BOOL)_getCornerPointsFromCodeLocationPoints:(id)arg1 bottomLeft:(CGPoint*)arg2 topLeft:(CGPoint*)arg3 topRight:(CGPoint*)arg4 bottomRight:(CGPoint*)arg5 ;
-(id)_barcodesDetectedInImageBuffer:(id)arg1 usingACBSConfig:(ACBSConfigRef)arg2 requestRevision:(unsigned long long)arg3 error:(id*)arg4 ;
-(void)setLocateMode:(NSString *)arg1 ;
-(id)newBarcodeObservationForACBSBarcodeInfo:(id)arg1 imageWidth:(unsigned long long)arg2 imageHeight:(unsigned long long)arg3 roiCroppingPixelRect:(CGRect)arg4 requestRevision:(unsigned long long)arg5 error:(id*)arg6 ;
-(BOOL)stopAtFirstPyramidWith2DCode;
-(void)setStopAtFirstPyramidWith2DCode:(BOOL)arg1 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(NSString *)locateMode;
-(NSArray *)symbologies;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(void)applyConfigurationOfRequest:(id)arg1 ;
@end

