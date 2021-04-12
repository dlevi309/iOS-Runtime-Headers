/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioPasscode.framework/AudioPasscode
*/


#import <AudioPasscode/AudioPasscode-Structs.h>
@interface APCCodecFactory : NSObject
+(unique_ptr<APCDecoderBase, std::__1::default_delete<APCDecoderBase> >*)createDecoderWithConfig:(id)arg1 apcConfig:(map<unsigned int, apc::Any, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, apc::Any> > >*)arg2 error:(id*)arg3 ;
+(unique_ptr<APCEncoderBase, std::__1::default_delete<APCEncoderBase> >*)createEncoderWithConfig:(id)arg1 apcConfig:(map<unsigned int, apc::Any, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, apc::Any> > >*)arg2 payloadData:(id)arg3 ;
+(float)evaluateCarrierWithConfig:(id)arg1 carrier:(id)arg2 embeddingResult:(id*)arg3 ;
+(id)createBestConfigForCapability:(id)arg1 ;
@end

