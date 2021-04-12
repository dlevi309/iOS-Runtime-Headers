/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordServices.framework/HealthRecordServices
*/

#import <HealthRecordServices/HealthRecordServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSURL, HKFHIRVersion;

@interface HDFHIRResourceData : NSObject <NSSecureCoding, NSCopying> {

	NSData* _data;
	NSURL* _sourceURL;
	HKFHIRVersion* _FHIRVersion;

}

@property (nonatomic,copy) NSData * data;                            //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) NSURL * sourceURL;                        //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,copy) HKFHIRVersion * FHIRVersion;              //@synthesize FHIRVersion=_FHIRVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setSourceURL:(NSURL *)arg1 ;
-(NSURL *)sourceURL;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(void)setData:(NSData *)arg1 ;
-(void)setFHIRVersion:(HKFHIRVersion *)arg1 ;
-(NSData *)data;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(HKFHIRVersion *)FHIRVersion;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)JSONDictionaryWithError:(id*)arg1 ;
-(id)initWithData:(id)arg1 sourceURL:(id)arg2 FHIRVersion:(id)arg3 ;
@end

