/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
*/


@class BCSQRCodeParser, NSDictionary;

@interface BCSAVParsingSession : NSObject {

	BCSQRCodeParser* _parser;
	NSDictionary* _lastScannedCodeBasicDescriptor;
	double _lastScannedTime;

}
-(id)init;
-(void)dealloc;
-(void)updateSessionWithMetadataObjects:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_isLikelyLastScannedObject:(id)arg1 ;
-(id)_bestObjectForParsing:(id)arg1 ;
-(void)_updateSessionWithMetadataObject:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(double)_temporalStickyFactorForObject:(id)arg1 ;
-(void)updateSessionWithMetadataObjects:(id)arg1 ;
@end

