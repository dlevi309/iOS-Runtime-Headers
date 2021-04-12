/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class REMObjectID, NSString;

@interface REMReplicaIDSource : NSObject <NSSecureCoding, NSCopying> {

	REMObjectID* _accountID;
	NSString* _crdtID;

}

@property (nonatomic,readonly) REMObjectID * accountID;              //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,readonly) NSString * crdtID;                    //@synthesize crdtID=_crdtID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)crdtIDWithObjectID:(id)arg1 property:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(REMObjectID *)accountID;
-(NSString *)crdtID;
-(id)initWithAccountID:(id)arg1 objectID:(id)arg2 property:(id)arg3 ;
-(id)initWithAccountID:(id)arg1 crdtID:(id)arg2 ;
@end

