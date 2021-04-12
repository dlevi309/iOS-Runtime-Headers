/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordServices.framework/HealthRecordServices
*/

#import <HealthRecordServices/HealthRecordServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSString, NSURL, NSData;

@interface HDFHIRJSONObject : NSObject <NSSecureCoding, NSCopying> {

	NSDictionary* _JSONObject;
	NSString* _FHIRVersion;
	NSURL* _sourceURL;

}

@property (nonatomic,copy,readonly) NSDictionary * JSONObject;                    //@synthesize JSONObject=_JSONObject - In the implementation block
@property (nonatomic,copy,readonly) NSString * FHIRVersion;                       //@synthesize FHIRVersion=_FHIRVersion - In the implementation block
@property (nonatomic,copy,readonly) NSURL * sourceURL;                            //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * detectedResourceType; 
@property (nonatomic,copy,readonly) NSData * data; 
@property (nonatomic,copy,readonly) NSString * sourceString; 
+(BOOL)supportsSecureCoding;
+(id)_dataFromJSONObject:(id)arg1 JSONOptions:(unsigned long long)arg2 ;
+(id)objectWithResourceData:(id)arg1 error:(id*)arg2 ;
+(id)resourceTypeOfJSONObject:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(NSURL *)sourceURL;
-(NSDictionary *)JSONObject;
-(NSString *)sourceString;
-(id)_dataWithJSONOptions:(unsigned long long)arg1 ;
-(NSString *)FHIRVersion;
-(id)initWithJSONObject:(id)arg1 sourceURL:(id)arg2 FHIRVersion:(id)arg3 ;
-(NSString *)detectedResourceType;
@end

