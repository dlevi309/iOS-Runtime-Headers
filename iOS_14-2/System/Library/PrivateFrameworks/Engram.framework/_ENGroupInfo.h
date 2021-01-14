/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(ENAccountIdentity *)accountIdentity;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setParticipants:(NSArray *)arg1 ;
-(NSArray *)participants;
-(id)initWithCoder:(id)arg1 ;
-(void)setAccountIdentity:(ENAccountIdentity *)arg1 ;
-(NSData *)sharedApplicationData;
-(id)initWithAccountIdentity:(id)arg1 paricipants:(id)arg2 sharedApplicationData:(id)arg3 ;
-(void)setSharedApplicationData:(NSData *)arg1 ;
@end

