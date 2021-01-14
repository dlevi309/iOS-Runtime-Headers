/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKMetric;

@interface CKOperationMetrics : NSObject <NSCopying, NSSecureCoding> {

	CKMetric* _cloudKitMetrics;
	CKMetric* _MMCSMetrics;

}

@property (nonatomic,copy) CKMetric * cloudKitMetrics;              //@synthesize cloudKitMetrics=_cloudKitMetrics - In the implementation block
@property (nonatomic,copy) CKMetric * MMCSMetrics;                  //@synthesize MMCSMetrics=_MMCSMetrics - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentation;
-(void)setMMCSMetrics:(CKMetric *)arg1 ;
-(CKMetric *)MMCSMetrics;
-(CKMetric *)cloudKitMetrics;
-(void)setCloudKitMetrics:(CKMetric *)arg1 ;
-(id)CKPropertiesDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)unionMetrics:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

