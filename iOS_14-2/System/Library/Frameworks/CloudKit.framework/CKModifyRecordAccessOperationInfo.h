/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CKModifyRecordAccessOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	NSArray* _recordIDsToGrant;
	NSArray* _recordIDsToRevoke;

}

@property (nonatomic,retain) NSArray * recordIDsToGrant;               //@synthesize recordIDsToGrant=_recordIDsToGrant - In the implementation block
@property (nonatomic,retain) NSArray * recordIDsToRevoke;              //@synthesize recordIDsToRevoke=_recordIDsToRevoke - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)recordIDsToGrant;
-(void)setRecordIDsToGrant:(NSArray *)arg1 ;
-(NSArray *)recordIDsToRevoke;
-(void)setRecordIDsToRevoke:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

