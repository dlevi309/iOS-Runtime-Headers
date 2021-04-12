/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (nonatomic,retain) CKMetric * cloudKitMetrics;              //@synthesize cloudKitMetrics=_cloudKitMetrics - In the implementation block
@property (nonatomic,retain) CKMetric * MMCSMetrics;                  //@synthesize MMCSMetrics=_MMCSMetrics - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(CKMetric *)cloudKitMetrics;
-(id)CKPropertiesDescription;
-(CKMetric *)MMCSMetrics;
-(void)setCloudKitMetrics:(CKMetric *)arg1 ;
-(void)setMMCSMetrics:(CKMetric *)arg1 ;
-(void)unionMetrics:(id)arg1 ;
@end

