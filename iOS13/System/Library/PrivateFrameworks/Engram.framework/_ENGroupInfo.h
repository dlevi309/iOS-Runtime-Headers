/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Engram.framework/Engram
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class ENAccountIdentity, NSArray, NSData;

@interface _ENGroupInfo : NSObject <NSSecureCoding> {

	ENAccountIdentity* _accountIdentity;
	NSArray* _participants;
	NSData* _sharedApplicationData;

}

@property (retain) ENAccountIdentity * accountIdentity;                   //@synthesize accountIdentity=_accountIdentity - In the implementation block
@property (nonatomic,retain) NSArray * participants;                      //@synthesize participants=_participants - In the implementation block
@property (nonatomic,retain) NSData * sharedApplicationData;              //@synthesize sharedApplicationData=_sharedApplicationData - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)participants;
-(ENAccountIdentity *)accountIdentity;
-(void)setAccountIdentity:(ENAccountIdentity *)arg1 ;
-(void)setParticipants:(NSArray *)arg1 ;
-(NSData *)sharedApplicationData;
-(id)initWithAccountIdentity:(id)arg1 paricipants:(id)arg2 sharedApplicationData:(id)arg3 ;
-(void)setSharedApplicationData:(NSData *)arg1 ;
@end

