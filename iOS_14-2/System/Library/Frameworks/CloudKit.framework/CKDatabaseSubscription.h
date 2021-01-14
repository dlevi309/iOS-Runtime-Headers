/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKSubscription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CKDatabaseSubscription : CKSubscription <NSSecureCoding, NSCopying>

@property (nonatomic,copy) NSString * recordType; 
+(id)new;
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithSubscriptionID:(id)arg1 ;
-(id)CKPropertiesDescription;
-(void)setRecordType:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

