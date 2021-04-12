/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)recordType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithRecordID:(id)arg1 recordType:(id)arg2 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(CKRecordID *)recordID;
@end

