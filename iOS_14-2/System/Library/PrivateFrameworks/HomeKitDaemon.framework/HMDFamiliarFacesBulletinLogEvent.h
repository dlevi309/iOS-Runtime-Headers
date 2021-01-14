/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>

@class NSString;

@interface HMDFamiliarFacesBulletinLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging> {

	BOOL _doorbellPressed;
	long long _numberOfKnownPersons;
	long long _numberOfUnknownPersons;
	NSString* _bulletinReason;
	double _secondsFromDoorbellToFaceClassification;

}

@property (readonly) long long numberOfKnownPersons;                              //@synthesize numberOfKnownPersons=_numberOfKnownPersons - In the implementation block
@property (readonly) long long numberOfUnknownPersons;                            //@synthesize numberOfUnknownPersons=_numberOfUnknownPersons - In the implementation block
@property (copy,readonly) NSString * bulletinReason;                              //@synthesize bulletinReason=_bulletinReason - In the implementation block
@property (readonly) BOOL doorbellPressed;                                        //@synthesize doorbellPressed=_doorbellPressed - In the implementation block
@property (readonly) double secondsFromDoorbellToFaceClassification;              //@synthesize secondsFromDoorbellToFaceClassification=_secondsFromDoorbellToFaceClassification - In the implementation block
+(id)identifier;
-(id)eventName;
-(id)initWithNumberOfKnownPersons:(long long)arg1 numberOfUnknownPersons:(long long)arg2 bulletinReason:(id)arg3 doorbellPressed:(BOOL)arg4 secondsFromDoorbellToFaceClassification:(double)arg5 ;
-(long long)numberOfKnownPersons;
-(long long)numberOfUnknownPersons;
-(NSString *)bulletinReason;
-(BOOL)doorbellPressed;
-(double)secondsFromDoorbellToFaceClassification;
-(id)serializedEvent;
@end

