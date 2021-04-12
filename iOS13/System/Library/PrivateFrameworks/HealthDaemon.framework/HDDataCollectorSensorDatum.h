/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSUUID * datumIdentifier; 
@property (nonatomic,copy,readonly) NSDateInterval * dateInterval; 
@property (nonatomic,copy,readonly) NSData * resumeContext; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDateInterval *)dateInterval;
-(NSData *)resumeContext;
-(NSUUID *)datumIdentifier;
-(id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 resumeContextProvider:(/*^block*/id)arg3 ;
-(id)resumeContextProvider;
-(id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 resumeContext:(id)arg3 ;
@end

