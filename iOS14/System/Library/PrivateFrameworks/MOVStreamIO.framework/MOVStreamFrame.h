/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
*/


#import <MOVStreamIO/MOVStreamIO-Structs.h>
@interface MOVStreamFrame : NSObject {

	CVBufferRef _pixelBuffer;
	double _timeStamp;
	id _context;
	SCD_Struct_MO30 _cmTimeStamp;

}

@property (readonly) CVBufferRef pixelBuffer;                  //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (readonly) double timeStamp;                         //@synthesize timeStamp=_timeStamp - In the implementation block
@property (readonly) SCD_Struct_MO30 cmTimeStamp;              //@synthesize cmTimeStamp=_cmTimeStamp - In the implementation block
@property (readonly) id context;                               //@synthesize context=_context - In the implementation block
-(id)context;
-(double)timeStamp;
-(id)description;
-(CVBufferRef)pixelBuffer;
-(void)dealloc;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 timeStamp:(double)arg2 context:(id)arg3 ;
-(SCD_Struct_MO30)cmTimeStamp;
@end

