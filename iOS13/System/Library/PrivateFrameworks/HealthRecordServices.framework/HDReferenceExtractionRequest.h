/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordServices.framework/HealthRecordServices
*/

#import <HealthRecordServices/HealthRecordServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSURL;

@interface HDReferenceExtractionRequest : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _resources;
	NSArray* _FHIRResourceData;
	NSURL* _serverBaseURL;

}

@property (nonatomic,copy,readonly) NSArray * resources;                     //@synthesize resources=_resources - In the implementation block
@property (nonatomic,copy,readonly) NSArray * FHIRResourceData;              //@synthesize FHIRResourceData=_FHIRResourceData - In the implementation block
@property (nonatomic,copy,readonly) NSURL * serverBaseURL;                   //@synthesize serverBaseURL=_serverBaseURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)resources;
-(NSURL *)serverBaseURL;
-(id)initWithResources:(id)arg1 FHIRResourceData:(id)arg2 serverBaseURL:(id)arg3 ;
-(NSArray *)FHIRResourceData;
@end

