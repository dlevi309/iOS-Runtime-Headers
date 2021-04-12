/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@class NSUUID;

@interface NWUUIDMapper : NSObject {

	double _lastAccessDate;
	NSUUID* _externalUUID;
	unsigned long long _usageFlags;

}

@property (assign,nonatomic) double lastAccessDate;                      //@synthesize lastAccessDate=_lastAccessDate - In the implementation block
@property (nonatomic,retain) NSUUID * externalUUID;                      //@synthesize externalUUID=_externalUUID - In the implementation block
@property (assign,nonatomic) unsigned long long usageFlags;              //@synthesize usageFlags=_usageFlags - In the implementation block
-(void)setLastAccessDate:(double)arg1 ;
-(double)lastAccessDate;
-(id)description;
-(unsigned long long)usageFlags;
-(NSUUID *)externalUUID;
-(void)setExternalUUID:(NSUUID *)arg1 ;
-(void)setUsageFlags:(unsigned long long)arg1 ;
@end

