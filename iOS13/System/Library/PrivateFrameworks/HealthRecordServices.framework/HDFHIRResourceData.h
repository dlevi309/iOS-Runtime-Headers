/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordServices.framework/HealthRecordServices
*/

#import <HealthRecordServices/HealthRecordServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSURL, NSString;

@interface HDFHIRResourceData : NSObject <NSSecureCoding, NSCopying> {

	NSData* _data;
	NSURL* _sourceURL;
	NSString* _FHIRVersion;

}

@property (nonatomic,copy) NSData * data;                       //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) NSURL * sourceURL;                   //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,copy) NSString * FHIRVersion;              //@synthesize FHIRVersion=_FHIRVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSURL *)sourceURL;
-(void)setSourceURL:(NSURL *)arg1 ;
-(NSString *)FHIRVersion;
-(id)JSONDictionaryWithError:(id*)arg1 ;
-(id)initWithData:(id)arg1 sourceURL:(id)arg2 FHIRVersion:(id)arg3 ;
-(void)setFHIRVersion:(NSString *)arg1 ;
@end

