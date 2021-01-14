/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/


@protocol OS_os_log;
#import <CoreBrightness/CoreBrightness-Structs.h>
@class NSObject, CBALSEvent;

@interface CBALSNodeiOS : NSObject {

	NSObject*<OS_os_log> _logHandle;
	int _placement;
	float _superFastIntegrationTime;
	float _fastIntegrationTime;
	float _slowIntegrationTime;
	BOOL _colorSupport;
	int _orientation;
	IOHIDServiceClientRef _alsService;
	CBALSEvent* _currentALSEvent;

}

@property (assign) IOHIDServiceClientRef alsService;                    //@synthesize alsService=_alsService - In the implementation block
@property (nonatomic,retain) CBALSEvent * currentALSEvent;              //@synthesize currentALSEvent=_currentALSEvent - In the implementation block
@property (assign) int orientation;                                     //@synthesize orientation=_orientation - In the implementation block
-(int)orientation;
-(BOOL)handleALSEvent:(id)arg1 ;
-(void)dealloc;
-(void)setOrientation:(int)arg1 ;
-(void)initALSProperties;
-(BOOL)isColorSupported;
-(id)initWithALSServiceClient:(IOHIDServiceClientRef)arg1 ;
-(BOOL)conformsToHIDServiceClient:(IOHIDServiceClientRef)arg1 ;
-(IOHIDServiceClientRef)alsService;
-(void)setAlsService:(IOHIDServiceClientRef)arg1 ;
-(CBALSEvent *)currentALSEvent;
-(void)setCurrentALSEvent:(CBALSEvent *)arg1 ;
@end

