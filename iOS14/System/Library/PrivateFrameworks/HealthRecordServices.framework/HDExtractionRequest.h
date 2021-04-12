/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordServices.framework/HealthRecordServices
*/

#import <HealthRecordServices/HealthRecordServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface HDExtractionRequest : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _resources;

}

@property (nonatomic,copy,readonly) NSArray * resources;              //@synthesize resources=_resources - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)resources;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithResources:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

