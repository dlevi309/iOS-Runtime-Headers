/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordServices.framework/HealthRecordServices
*/

#import <HealthRecordServices/HealthRecordServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface HDExtractionResult : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _items;

}

@property (nonatomic,copy,readonly) NSArray * items;              //@synthesize items=_items - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithItems:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)items;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)medicalRecords;
-(id)clinicalRecords;
@end

