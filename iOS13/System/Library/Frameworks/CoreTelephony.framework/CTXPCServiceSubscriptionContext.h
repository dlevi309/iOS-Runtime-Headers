/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/IDSCTSIM.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID, NSNumber;

@interface CTXPCServiceSubscriptionContext : NSObject <IDSCTSIM, NSCopying, NSSecureCoding> {

	BOOL _isSimPresent;
	BOOL _isSimGood;
	long long _slotID;
	NSUUID* _uuid;
	NSString* _labelID;
	NSString* _label;
	NSString* _phoneNumber;
	NSNumber* _userDataPreferred;
	NSNumber* _userDefaultVoice;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * SIMIdentifier; 
@property (nonatomic,readonly) NSString * phoneNumber; 
@property (nonatomic,readonly) NSString * label; 
@property (nonatomic,readonly) unsigned long long slot; 
@property (nonatomic,retain) NSString * labelID;                        //@synthesize labelID=_labelID - In the implementation block
@property (nonatomic,retain) NSString * label;                          //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;                    //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) NSNumber * userDataPreferred;              //@synthesize userDataPreferred=_userDataPreferred - In the implementation block
@property (nonatomic,retain) NSNumber * userDefaultVoice;               //@synthesize userDefaultVoice=_userDefaultVoice - In the implementation block
@property (assign,nonatomic) BOOL isSimPresent;                         //@synthesize isSimPresent=_isSimPresent - In the implementation block
@property (assign,nonatomic) BOOL isSimGood;                            //@synthesize isSimGood=_isSimGood - In the implementation block
@property (nonatomic,readonly) long long slotID;                        //@synthesize slotID=_slotID - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                           //@synthesize uuid=_uuid - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)contextWithSlot:(long long)arg1 ;
+(id)contextWithUUID:(id)arg1 ;
+(id)contextWithServiceDescriptor:(id)arg1 ;
-(unsigned long long)slot;
-(NSString *)SIMIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uuid;
-(id)context;
-(NSString *)phoneNumber;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(id)initWithUUID:(id)arg1 ;
-(long long)slotID;
-(id)initWithSlot:(long long)arg1 ;
-(id)initWithUUID:(id)arg1 andSlot:(long long)arg2 ;
-(NSString *)labelID;
-(NSNumber *)userDataPreferred;
-(NSNumber *)userDefaultVoice;
-(BOOL)isSimPresent;
-(BOOL)isSimGood;
-(void)setLabelID:(NSString *)arg1 ;
-(void)setUserDataPreferred:(NSNumber *)arg1 ;
-(void)setUserDefaultVoice:(NSNumber *)arg1 ;
-(void)setIsSimPresent:(BOOL)arg1 ;
-(void)setIsSimGood:(BOOL)arg1 ;
@end

