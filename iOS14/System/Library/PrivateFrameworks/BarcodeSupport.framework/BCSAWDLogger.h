/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
*/


@interface BCSAWDLogger : NSObject
+(id)sharedLogger;
-(void)logBarcodeActivatedEventForAction:(id)arg1 ;
-(int)_awdBarcodeClientType;
-(int)_awdBarcodeSourceTypeForAction:(id)arg1 ;
-(int)_awdBarcodeDataTypeFromAction:(id)arg1 ;
-(int)_awdInvalidBarcodeDataTypeFromInvalidData:(id)arg1 ;
-(int)_awdBarcodeURLTypeFromURLAction:(id)arg1 ;
-(int)_awdBarcodePreferredAppLinkOpenStrategyFromURLAction:(id)arg1 ;
-(id)barcodeDetectedEventForAction:(id)arg1 ;
-(void)logBarcodeDetectedEvent:(id)arg1 startTime:(unsigned long long)arg2 ;
-(void)logBarcodeDetectedEventForAction:(id)arg1 startTime:(unsigned long long)arg2 ;
-(void)logBarcodePreviewedEventForContentType:(long long)arg1 ;
@end

