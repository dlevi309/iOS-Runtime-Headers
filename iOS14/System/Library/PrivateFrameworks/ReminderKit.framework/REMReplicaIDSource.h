/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(REMObjectID *)accountID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithAccountID:(id)arg1 objectID:(id)arg2 property:(id)arg3 ;
-(NSString *)crdtID;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithAccountID:(id)arg1 crdtID:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

