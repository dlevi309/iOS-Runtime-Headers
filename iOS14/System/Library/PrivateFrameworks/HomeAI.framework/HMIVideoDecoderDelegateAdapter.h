/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMIVideoDecoderDelegate.h>

@class NSString;

@interface HMIVideoDecoderDelegateAdapter : HMFObject <HMIVideoDecoderDelegate> {

	/*^block*/id _decoderDidDecodeSampleBuffer;
	/*^block*/id _decoderDidFailWithError;

}

@property (copy) id decoderDidDecodeSampleBuffer;                   //@synthesize decoderDidDecodeSampleBuffer=_decoderDidDecodeSampleBuffer - In the implementation block
@property (copy) id decoderDidFailWithError;                        //@synthesize decoderDidFailWithError=_decoderDidFailWithError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)decoder:(id)arg1 didDecodeSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)decoder:(id)arg1 didFailWithError:(id)arg2 ;
-(id)decoderDidDecodeSampleBuffer;
-(id)decoderDidFailWithError;
-(void)setDecoderDidDecodeSampleBuffer:(id)arg1 ;
-(void)setDecoderDidFailWithError:(id)arg1 ;
@end

