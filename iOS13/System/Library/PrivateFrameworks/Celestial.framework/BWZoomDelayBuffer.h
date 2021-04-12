/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


#import <Celestial/Celestial-Structs.h>
@interface BWZoomDelayBuffer : NSObject {

	SCD_Struct_BW97* _zoomRequestBuffer;
	unsigned _zoomRequestBufferIndex;
	unsigned _maxZoomDelay;
	unsigned _currentZoomDelay;
	int _currentZoomDirection;
	int _operatingMode;

}

@property (nonatomic,readonly) unsigned zoomDelay;              //@synthesize currentZoomDelay=_currentZoomDelay - In the implementation block
@property (assign,nonatomic) int operatingMode;                 //@synthesize operatingMode=_operatingMode - In the implementation block
-(void)dealloc;
-(unsigned)zoomDelay;
-(id)initWithMaxZoomDelay:(unsigned)arg1 ;
-(void)setOperatingMode:(int)arg1 ;
-(void)addZoomRequest:(SCD_Struct_BW97)arg1 ;
-(SCD_Struct_BW97)zoomRequestForISPAppliedZoomFactor:(float)arg1 ;
-(void)updateZoomDelay:(unsigned)arg1 ;
-(int)operatingMode;
@end

