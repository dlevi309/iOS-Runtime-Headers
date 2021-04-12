/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BrightnessControl.framework/BrightnessControl
*/


@protocol OS_os_log, OS_dispatch_queue;
#import <BrightnessControl/BrightnessControl-Structs.h>
@class NSObject, NSString, NSMutableDictionary, NSUUID, NSDictionary;

@interface BCBrtControl : NSObject {

	NSObject*<OS_os_log> _logHandle;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _id;
	BOOL _isValid;
	NSMutableDictionary* _capabilities;
	double _maxNits;
	double _midNits;
	double _minNits;
	NSUUID* _containerID;
	const CFUUIDRef _cfContainerID;
	unsigned _displayService;
	BOOL _multipleControlEnabled;
	/*^block*/id _displayInvalidHandler;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (readonly) NSObject*<OS_os_log> logHandle; 
@property (readonly) NSObject*<OS_dispatch_queue> queue; 
@property (readonly) const CFUUIDRef cfContainerID; 
@property (readonly) NSUUID * containerID;                                  //@synthesize containerID=_containerID - In the implementation block
@property (readonly) double maxNits;                                        //@synthesize maxNits=_maxNits - In the implementation block
@property (readonly) double minNits;                                        //@synthesize minNits=_minNits - In the implementation block
@property (copy,readonly) id ID; 
@property (readonly) NSDictionary * capabilities;                           //@synthesize capabilities=_capabilities - In the implementation block
@property (assign) BOOL multipleControlEnabled;                             //@synthesize multipleControlEnabled=_multipleControlEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) BOOL isValid;                                          //@synthesize isValid=_isValid - In the implementation block
@property (copy) id displayInvalidHandler;                                  //@synthesize displayInvalidHandler=_displayInvalidHandler - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
+(id)newMonitorWithHandler:(/*^block*/id)arg1 error:(id*)arg2 ;
+(id)copyAvailableControls;
+(id)newMonitorForAllControlsWithHandler:(/*^block*/id)arg1 error:(id*)arg2 ;
+(id)copyAllAvailableControls;
-(id)ID;
-(NSUUID *)containerID;
-(NSDictionary *)capabilities;
-(id)init;
-(id)copyProperty:(id)arg1 error:(id*)arg2 ;
-(BOOL)isValid;
-(NSObject*<OS_os_log>)logHandle;
-(unsigned long long)hash;
-(NSObject*<OS_dispatch_queue>)queue;
-(double)maxNits;
-(double)minNits;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)displayInvalidHandler;
-(void)_runOnCallbackQueue:(/*^block*/id)arg1 ;
-(BOOL)_checkIsValid:(id*)arg1 ;
-(id)copyModuleIdentifier;
-(BOOL)setNits:(double)arg1 error:(id*)arg2 ;
-(double)getNitsWithError:(id*)arg1 ;
-(BOOL)setProperty:(id)arg1 value:(id)arg2 error:(id*)arg3 ;
-(void)setDisplayService:(unsigned)arg1 ;
-(const CFUUIDRef)cfContainerID;
-(void)setNitsAsync:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setPropertyAync:(id)arg1 value:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)multipleControlEnabled;
-(void)setMultipleControlEnabled:(BOOL)arg1 ;
-(void)setDisplayInvalidHandler:(id)arg1 ;
@end

