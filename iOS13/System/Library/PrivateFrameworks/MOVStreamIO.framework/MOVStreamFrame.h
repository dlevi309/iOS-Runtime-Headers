/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
*/


#import <MOVStreamIO/MOVStreamIO-Structs.h>
@interface MOVStreamFrame : NSObject {

	CVBufferRef _pixelBuffer;
	double _timeStamp;
	id _context;
	SCD_Struct_MO29 _cmTimeStamp;

}

@property (readonly) CVBufferRef pixelBuffer;                  //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (readonly) double timeStamp;                         //@synthesize timeStamp=_timeStamp - In the implementation block
@property (readonly) SCD_Struct_MO29 cmTimeStamp;              //@synthesize cmTimeStamp=_cmTimeStamp - In the implementation block
@property (readonly) id context;                               //@synthesize context=_context - In the implementation block
-(void)dealloc;
-(id)description;
-(id)context;
-(CVBufferRef)pixelBuffer;
-(double)timeStamp;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 timeStamp:(double)arg2 context:(id)arg3 ;
-(SCD_Struct_MO29)cmTimeStamp;
@end

