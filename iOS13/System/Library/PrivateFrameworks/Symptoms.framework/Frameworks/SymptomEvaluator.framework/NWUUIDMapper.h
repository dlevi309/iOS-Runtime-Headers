/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@class NSUUID;

@interface NWUUIDMapper : NSObject {

	double _lastAccessDate;
	NSUUID* _externalUUID;
	unsigned long long _usageFlags;

}

@property (assign,nonatomic) double lastAccessDate;                            //@synthesize lastAccessDate=_lastAccessDate - In the implementation block
@property (nonatomic,retain) NSUUID * externalUUID;                            //@synthesize externalUUID=_externalUUID - In the implementation block
@property (assign,nonatomic) unsigned long long usageFlags;                    //@synthesize usageFlags=_usageFlags - In the implementation block
@property (nonatomic,readonly) BOOL reportDestinationsConfigured; 
-(id)description;
-(unsigned long long)usageFlags;
-(NSUUID *)externalUUID;
-(void)setExternalUUID:(NSUUID *)arg1 ;
-(void)setLastAccessDate:(double)arg1 ;
-(double)lastAccessDate;
-(void)ensureReportDestinationsConfigured;
-(BOOL)reportDestinationsConfigured;
-(void)inheritReportDestinations:(id)arg1 ;
-(void)setUsageFlags:(unsigned long long)arg1 ;
@end

