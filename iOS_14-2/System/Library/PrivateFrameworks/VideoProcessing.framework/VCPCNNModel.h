/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@class VCPCNNBlock, VCPCNNMetalContext, VCPCNNData;

@interface VCPCNNModel : NSObject {

	VCPCNNBlock* _blocks[200];
	short _quantFactor;
	BOOL _useGPU;
	VCPCNNMetalContext* _context;
	VCPCNNData* _output;

}

@property (readonly) VCPCNNData * output;              //@synthesize output=_output - In the implementation block
-(id)init;
-(int)size;
-(VCPCNNData *)output;
-(int)forward:(id)arg1 ;
-(id)getGPUContext;
-(id)initWithParameters:(short)arg1 useGPU:(BOOL)arg2 ;
-(int)prepareNetworkFromURL:(id)arg1 withInputSize:(id)arg2 ;
-(int)add:(id)arg1 ;
-(int)dynamicForward:(id)arg1 paramFileUrl:(id)arg2 cancel:(/*^block*/id)arg3 ;
@end

