/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(id)_pdfDataRepresentation;
-(double)kernelExecutionTime;
-(id)initWithCompletedTask:(id)arg1 ;
-(long long)kernelExecutionCycles;
-(long long)passCount;
-(long long)pixelsProcessed;
-(long long)pixelsOverdrawn;
-(double)timeForNodeID:(unsigned long long)arg1 ;
@end

