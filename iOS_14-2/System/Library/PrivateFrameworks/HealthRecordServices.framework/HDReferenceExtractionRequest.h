/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordServices.framework/HealthRecordServices
*/

#import <HealthRecordServices/HealthRecordServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSURL, NSString;

@interface HDReferenceExtractionRequest : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _resources;
	NSArray* _FHIRResourceData;
	NSURL* _serverBaseURL;
	NSString* _FHIRRelease;

}

@property (nonatomic,copy,readonly) NSArray * resources;                     //@synthesize resources=_resources - In the implementation block
@property (nonatomic,copy,readonly) NSArray * FHIRResourceData;              //@synthesize FHIRResourceData=_FHIRResourceData - In the implementation block
@property (nonatomic,copy,readonly) NSURL * serverBaseURL;                   //@synthesize serverBaseURL=_serverBaseURL - In the implementation block
@property (nonatomic,readonly) NSString * FHIRRelease;                       //@synthesize FHIRRelease=_FHIRRelease - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)resources;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)FHIRRelease;
-(NSURL *)serverBaseURL;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithResources:(id)arg1 FHIRResourceData:(id)arg2 serverBaseURL:(id)arg3 ;
-(NSArray *)FHIRResourceData;
@end

