/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordServices.framework/HealthRecordServices
*/

#import <HealthRecordServices/HealthRecordServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSNumber;

@interface HDClinicalDataCollectionExtractionResult : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _redactedResources;
	NSNumber* _rulesVersion;

}

@property (nonatomic,copy,readonly) NSArray * redactedResources;              //@synthesize redactedResources=_redactedResources - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * rulesVersion;                  //@synthesize rulesVersion=_rulesVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)rulesVersion;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRedactedResources:(id)arg1 rulesVersion:(id)arg2 ;
-(NSArray *)redactedResources;
@end

