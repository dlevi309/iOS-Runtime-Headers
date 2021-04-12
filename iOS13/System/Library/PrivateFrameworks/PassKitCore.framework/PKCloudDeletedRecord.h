/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKRecordID, NSString;

@interface PKCloudDeletedRecord : NSObject <NSSecureCoding> {

	CKRecordID* _recordID;
	NSString* _recordType;

}

@property (nonatomic,readonly) CKRecordID * recordID;                   //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,copy,readonly) NSString * recordType;              //@synthesize recordType=_recordType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)recordType;
-(CKRecordID *)recordID;
-(id)initWithRecordID:(id)arg1 recordType:(id)arg2 ;
@end

