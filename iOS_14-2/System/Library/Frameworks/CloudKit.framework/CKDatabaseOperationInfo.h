/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CKDatabaseOperationInfo : CKOperationInfo <NSSecureCoding> {

	long long _databaseScope;

}

@property (assign,nonatomic) long long databaseScope;              //@synthesize databaseScope=_databaseScope - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)activityCreate;
-(void)takeValuesFrom:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDatabaseScope:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)databaseScope;
@end

