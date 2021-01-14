/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@class NSString;

@interface CLSSignalNode : NSObject {

	unsigned long long _identifier;
	NSString* _name;
	double _operatingPoint;
	double _highPrecisionOperatingPoint;
	double _highRecallOperatingPoint;

}

@property (readonly) unsigned long long identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (readonly) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (readonly) double operatingPoint;                           //@synthesize operatingPoint=_operatingPoint - In the implementation block
@property (readonly) double highPrecisionOperatingPoint;              //@synthesize highPrecisionOperatingPoint=_highPrecisionOperatingPoint - In the implementation block
@property (readonly) double highRecallOperatingPoint;                 //@synthesize highRecallOperatingPoint=_highRecallOperatingPoint - In the implementation block
-(BOOL)failsHighRecallWithConfidence:(double)arg1 ;
-(double)highPrecisionOperatingPoint;
-(BOOL)failsWithSignal:(id)arg1 ;
-(BOOL)failsWithConfidence:(double)arg1 ;
-(NSString *)name;
-(BOOL)failsHighRecallWithSignal:(id)arg1 ;
-(id)initWithIdentifier:(unsigned long long)arg1 name:(id)arg2 operatingPoint:(double)arg3 highPrecisionOperatingPoint:(double)arg4 highRecallOperatingPoint:(double)arg5 ;
-(BOOL)passesHighRecallWithConfidence:(double)arg1 ;
-(id)signalInfoWithIsHierarchical:(BOOL)arg1 ;
-(BOOL)passesWithSignal:(id)arg1 ;
-(BOOL)failsHighPrecisionWithConfidence:(double)arg1 ;
-(double)operatingPoint;
-(unsigned long long)identifier;
-(BOOL)failsHighPrecisionWithSignal:(id)arg1 ;
-(BOOL)passesHighPrecisionWithSignal:(id)arg1 ;
-(BOOL)passesHighPrecisionWithConfidence:(double)arg1 ;
-(BOOL)passesWithConfidence:(double)arg1 ;
-(BOOL)passesHighRecallWithSignal:(id)arg1 ;
-(double)highRecallOperatingPoint;
@end

