/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CNUIAAfamilyMember : NSObject <NSSecureCoding> {

	BOOL _isMe;
	NSString* _appleID;
	NSString* _firstName;
	NSString* _lastName;

}

@property (nonatomic,copy) NSString * appleID;                //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,copy) NSString * firstName;              //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy) NSString * lastName;               //@synthesize lastName=_lastName - In the implementation block
@property (assign,nonatomic) BOOL isMe;                       //@synthesize isMe=_isMe - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)cnuiFamilyMemberWithAAFamilyMember:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)appleID;
-(NSString *)firstName;
-(NSString *)lastName;
-(BOOL)isMe;
-(void)setIsMe:(BOOL)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setAppleID:(NSString *)arg1 ;
@end

