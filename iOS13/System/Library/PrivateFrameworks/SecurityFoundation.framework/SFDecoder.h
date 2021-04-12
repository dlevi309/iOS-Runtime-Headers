/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/


@class SFCodingOptions;

@interface SFDecoder : NSObject {

	id _decoderInternal;

}

@property (nonatomic,copy) SFCodingOptions * options; 
-(SFCodingOptions *)options;
-(id)initWithOptions:(id)arg1 ;
-(void)setOptions:(SFCodingOptions *)arg1 ;
-(id)decodeValueOfType:(Class)arg1 fromData:(id)arg2 error:(id)arg3 ;
@end

