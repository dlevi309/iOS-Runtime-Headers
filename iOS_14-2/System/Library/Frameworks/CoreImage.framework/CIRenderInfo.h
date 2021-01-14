/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/


@interface CIRenderInfo : NSObject {

	void* _priv;

}

@property (readonly) double kernelExecutionTime; 
@property (readonly) long long passCount; 
@property (readonly) long long pixelsProcessed; 
+(id)renderInfoWithCompletedTask:(id)arg1 ;
-(id)init;
-(long long)passCount;
-(id)_pdfDataRepresentation;
-(long long)kernelExecutionCycles;
-(id)description;
-(id)initWithCompletedTask:(id)arg1 ;
-(double)timeForNodeID:(unsigned long long)arg1 ;
-(double)kernelExecutionTime;
-(long long)pixelsOverdrawn;
-(void)dealloc;
-(long long)pixelsProcessed;
@end

