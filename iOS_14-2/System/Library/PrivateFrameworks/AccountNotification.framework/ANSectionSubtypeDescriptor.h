/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccountNotification.framework/AccountNotification
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ANSectionSubtypeDescriptor : NSObject <NSSecureCoding> {

	BOOL _allowsAddingToLockScreenWhenUnlocked;
	NSString* _accountTypeID;
	long long _subtype;
	NSString* _fullUnlockActionLabel;

}

@property (nonatomic,readonly) NSString * accountTypeID;                             //@synthesize accountTypeID=_accountTypeID - In the implementation block
@property (assign,nonatomic) long long subtype;                                      //@synthesize subtype=_subtype - In the implementation block
@property (assign,nonatomic) BOOL allowsAddingToLockScreenWhenUnlocked;              //@synthesize allowsAddingToLockScreenWhenUnlocked=_allowsAddingToLockScreenWhenUnlocked - In the implementation block
@property (nonatomic,copy) NSString * fullUnlockActionLabel;                         //@synthesize fullUnlockActionLabel=_fullUnlockActionLabel - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)subtype;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)allowsAddingToLockScreenWhenUnlocked;
-(id)initWithCoder:(id)arg1 ;
-(void)setSubtype:(long long)arg1 ;
-(NSString *)fullUnlockActionLabel;
-(void)setFullUnlockActionLabel:(NSString *)arg1 ;
-(void)setAllowsAddingToLockScreenWhenUnlocked:(BOOL)arg1 ;
-(NSString *)accountTypeID;
-(id)initForAccountWithType:(id)arg1 ;
@end

