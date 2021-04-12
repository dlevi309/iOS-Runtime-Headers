/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString;

@interface CTXPCContextInfo : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _uuid;
	NSString* _accountID;
	long long _slotID;
	NSString* _labelID;
	NSString* _label;
	NSString* _phoneNumber;

}

@property (nonatomic,retain) NSString * labelID;                  //@synthesize labelID=_labelID - In the implementation block
@property (nonatomic,retain) NSString * label;                    //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                     //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSString * accountID;              //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,readonly) long long slotID;                  //@synthesize slotID=_slotID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)contextWithUUID:(id)arg1 andAccountID:(id)arg2 andSlot:(long long)arg3 ;
-(NSString *)accountID;
-(long long)slotID;
-(NSString *)labelID;
-(void)setLabelID:(NSString *)arg1 ;
-(NSUUID *)uuid;
-(id)initWithUUID:(id)arg1 andAccountID:(id)arg2 andSlot:(long long)arg3 ;
-(NSString *)phoneNumber;
-(void)encodeWithCoder:(id)arg1 ;
-(id)context;
-(id)description;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(BOOL)isEqual:(id)arg1 ;
@end

