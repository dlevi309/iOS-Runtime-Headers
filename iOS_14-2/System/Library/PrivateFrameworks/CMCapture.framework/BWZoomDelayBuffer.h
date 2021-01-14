/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@interface BWZoomDelayBuffer : NSObject {

	SCD_Struct_BW145* _zoomRequestBuffer;
	unsigned _zoomRequestBufferIndex;
	unsigned _maxZoomDelay;
	unsigned _currentZoomDelay;
	int _currentZoomDirection;
	int _operatingMode;

}

@property (nonatomic,readonly) unsigned zoomDelay;              //@synthesize currentZoomDelay=_currentZoomDelay - In the implementation block
@property (assign,nonatomic) int operatingMode;                 //@synthesize operatingMode=_operatingMode - In the implementation block
-(id)initWithMaxZoomDelay:(unsigned)arg1 ;
-(void)setOperatingMode:(int)arg1 ;
-(unsigned)zoomDelay;
-(int)operatingMode;
-(SCD_Struct_BW145)zoomRequestForISPAppliedZoomFactor:(float)arg1 ;
-(void)addZoomRequest:(SCD_Struct_BW145)arg1 ;
-(void)updateZoomDelay:(unsigned)arg1 ;
-(void)dealloc;
@end

