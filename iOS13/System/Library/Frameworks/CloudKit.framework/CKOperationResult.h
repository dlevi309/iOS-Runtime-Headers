/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSError, CKOperationMetrics;

@interface CKOperationResult : NSObject <NSSecureCoding> {

	NSString* _operationID;
	NSError* _error;
	CKOperationMetrics* _metrics;

}

@property (nonatomic,retain) NSString * operationID;                    //@synthesize operationID=_operationID - In the implementation block
@property (nonatomic,retain) NSError * error;                           //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) CKOperationMetrics * metrics;              //@synthesize metrics=_metrics - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(CKOperationMetrics *)metrics;
-(void)setMetrics:(CKOperationMetrics *)arg1 ;
-(NSString *)operationID;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(void)setOperationID:(NSString *)arg1 ;
@end

