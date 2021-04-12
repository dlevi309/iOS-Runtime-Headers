/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordServices.framework/HealthRecordServices
*/

#import <HealthRecordServices/HealthRecordServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface HRSSupportedFHIRConfiguration : NSObject <NSCopying, NSSecureCoding> {

	NSMutableDictionary* _releasesTable;

}

@property (nonatomic,retain) NSMutableDictionary * releasesTable;              //@synthesize releasesTable=_releasesTable - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)emetConfiguration;
-(BOOL)isSupportedFHIRVersionString:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isSupportedFHIRResourceType:(id)arg1 FHIRVersionString:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isSupportedFHIRRelease:(id)arg1 ;
-(BOOL)isSupportedFHIRResourceType:(id)arg1 FHIRRelease:(id)arg2 ;
-(BOOL)addSupportedFHIRRelease:(id)arg1 error:(id*)arg2 ;
-(NSMutableDictionary *)releasesTable;
-(void)setReleasesTable:(NSMutableDictionary *)arg1 ;
-(id)supportedReleaseForFHIRRelease:(id)arg1 ;
@end

