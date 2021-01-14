/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDCollectedSensorDatum.h>

@class NSUUID, NSDateInterval, NSData, NSString;

@interface HDDataCollectorSensorDatum : NSObject <HDCollectedSensorDatum> {

	NSUUID* _datumIdentifier;
	NSDateInterval* _dateInterval;
	NSData* _resumeContext;
	/*^block*/id _resumeContextProvider;

}

@property (nonatomic,copy,readonly) id resumeContextProvider;                   //@synthesize resumeContextProvider=_resumeContextProvider - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * datumIdentifier; 
@property (nonatomic,copy,readonly) NSDateInterval * dateInterval; 
@property (nonatomic,copy,readonly) NSData * resumeContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSDateInterval *)dateInterval;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(NSUUID *)datumIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)resumeContext;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 resumeContextProvider:(/*^block*/id)arg3 ;
-(id)resumeContextProvider;
-(id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 resumeContext:(id)arg3 ;
@end

