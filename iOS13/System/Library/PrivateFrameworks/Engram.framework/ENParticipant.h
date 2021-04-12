/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Engram.framework/Engram
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol ENAccountPublicKey;
@class NSSet, NSArray;

@interface ENParticipant : NSObject <NSSecureCoding> {

	id<ENAccountPublicKey> _accountPublicKey;
	NSSet* _aliases;
	NSArray* _devices;

}

@property (nonatomic,retain) id<ENAccountPublicKey> accountPublicKey;              //@synthesize accountPublicKey=_accountPublicKey - In the implementation block
@property (nonatomic,retain) NSSet * aliases;                                      //@synthesize aliases=_aliases - In the implementation block
@property (nonatomic,retain) NSArray * devices;                                    //@synthesize devices=_devices - In the implementation block
@property (nonatomic,readonly) BOOL supportsEngram; 
+(id)participantsFromEndpoints:(id)arg1 ;
+(id)participantsByAlias:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)devices;
-(void)setDevices:(NSArray *)arg1 ;
-(NSSet *)aliases;
-(id)deviceWithIdentifier:(id)arg1 ;
-(id)initWithAccountPublicKey:(id)arg1 aliases:(id)arg2 devices:(id)arg3 ;
-(id<ENAccountPublicKey>)accountPublicKey;
-(void)setAliases:(NSSet *)arg1 ;
-(BOOL)supportsEngram;
-(void)setAccountPublicKey:(id<ENAccountPublicKey>)arg1 ;
@end

