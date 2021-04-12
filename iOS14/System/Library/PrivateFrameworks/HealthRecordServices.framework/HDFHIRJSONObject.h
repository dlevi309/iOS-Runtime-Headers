/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordServices.framework/HealthRecordServices
*/

#import <HealthRecordServices/HealthRecordServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, HKFHIRVersion, NSURL, NSString, NSData;

@interface HDFHIRJSONObject : NSObject <NSSecureCoding, NSCopying> {

	NSDictionary* _JSONObject;
	HKFHIRVersion* _FHIRVersion;
	NSURL* _sourceURL;

}

@property (nonatomic,copy,readonly) NSDictionary * JSONObject;                    //@synthesize JSONObject=_JSONObject - In the implementation block
@property (nonatomic,copy,readonly) HKFHIRVersion * FHIRVersion;                  //@synthesize FHIRVersion=_FHIRVersion - In the implementation block
@property (nonatomic,copy,readonly) NSURL * sourceURL;                            //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * detectedResourceType; 
@property (nonatomic,copy,readonly) NSData * data; 
@property (nonatomic,copy,readonly) NSString * sourceString; 
+(BOOL)supportsSecureCoding;
+(id)_dataFromJSONObject:(id)arg1 JSONOptions:(unsigned long long)arg2 ;
+(id)objectWithResourceData:(id)arg1 error:(id*)arg2 ;
+(id)resourceTypeOfJSONObject:(id)arg1 error:(id*)arg2 ;
-(NSURL *)sourceURL;
-(NSDictionary *)JSONObject;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)data;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(HKFHIRVersion *)FHIRVersion;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)sourceString;
-(id)_dataWithJSONOptions:(unsigned long long)arg1 ;
-(id)initWithJSONObject:(id)arg1 sourceURL:(id)arg2 FHIRVersion:(id)arg3 ;
-(NSString *)detectedResourceType;
@end

