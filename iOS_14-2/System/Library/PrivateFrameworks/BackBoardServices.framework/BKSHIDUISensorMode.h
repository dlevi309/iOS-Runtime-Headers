/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/BSDescriptionStreamable.h>

@class NSString;

@interface BKSHIDUISensorMode : NSObject <BSDescriptionStreamable> {

	NSString* _reason;
	long long _versionedPID;
	unsigned long long _changeSource;
	int _proximityDetectionMode;
	BOOL _digitizerEnabled;
	BOOL _pocketTouchesExpected;
	BOOL _tapToWakeEnabled;
	BOOL _coverGestureEnabled;
	BOOL _alwaysOnGesturesEnabled;
	BOOL _estimatedProximityMode;
	BOOL _postEventWithCurrentDetectionMask;

}

@property (getter=isRestrictedToSystemShell,nonatomic,readonly) BOOL restrictedToSystemShell; 
@property (nonatomic,readonly) BOOL estimatedProximityMode; 
@property (nonatomic,readonly) long long versionedPID; 
@property (nonatomic,readonly) NSString * reason; 
@property (nonatomic,readonly) unsigned long long changeSource; 
@property (nonatomic,readonly) BOOL postEventWithCurrentDetectionMask; 
@property (nonatomic,readonly) int proximityDetectionMode; 
@property (nonatomic,readonly) BOOL digitizerEnabled; 
@property (nonatomic,readonly) BOOL pocketTouchesExpected; 
@property (nonatomic,readonly) BOOL tapToWakeEnabled; 
@property (nonatomic,readonly) BOOL coverGestureEnabled; 
@property (nonatomic,readonly) BOOL alwaysOnGesturesEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(id)protobufSchema;
+(id)buildModeForReason:(id)arg1 builder:(/*^block*/id)arg2 ;
+(id)_prevailingMode:(id)arg1 ;
-(id)init;
-(id)mutableCopy;
-(void)appendDescriptionToFormatter:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(int)proximityDetectionMode;
-(long long)versionedPID;
-(NSString *)description;
-(BOOL)pocketTouchesExpected;
-(id)initForProtobufDecoding;
-(NSString *)reason;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)changeSource;
-(id)_init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initCopyFrom:(id)arg1 ;
-(BOOL)isEffectivelyEqualToMode:(id)arg1 ;
-(BOOL)digitizerEnabled;
-(BOOL)tapToWakeEnabled;
-(BOOL)coverGestureEnabled;
-(BOOL)alwaysOnGesturesEnabled;
-(BOOL)postEventWithCurrentDetectionMask;
-(BOOL)estimatedProximityMode;
-(BOOL)isRestrictedToSystemShell;
-(long long)_comparisonScore;
-(BOOL)isEqual:(id)arg1 ;
@end

