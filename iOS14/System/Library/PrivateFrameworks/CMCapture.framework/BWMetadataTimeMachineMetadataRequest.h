/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWMetadataTimeMachineRequest.h>

@class NSArray;

@interface BWMetadataTimeMachineMetadataRequest : BWMetadataTimeMachineRequest {

	SCD_Struct_BW39 _ptsRange;
	NSArray* _metadataForPTSRange;

}

@property (nonatomic,readonly) SCD_Struct_BW39 ptsRange;                   //@synthesize ptsRange=_ptsRange - In the implementation block
@property (nonatomic,readonly) NSArray * metadataForPTSRange;              //@synthesize metadataForPTSRange=_metadataForPTSRange - In the implementation block
-(SCD_Struct_BW39)ptsRange;
-(id)initWithPTSRange:(SCD_Struct_BW39)arg1 ;
-(NSArray *)metadataForPTSRange;
-(void)completeWithMetadata:(id)arg1 ;
-(void)dealloc;
@end

