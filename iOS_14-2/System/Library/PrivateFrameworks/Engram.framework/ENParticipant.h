/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSSet *)aliases;
-(NSArray *)devices;
-(void)setDevices:(NSArray *)arg1 ;
-(id<ENAccountPublicKey>)accountPublicKey;
-(id)deviceWithIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAliases:(NSSet *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithAccountPublicKey:(id)arg1 aliases:(id)arg2 devices:(id)arg3 ;
-(BOOL)supportsEngram;
-(void)setAccountPublicKey:(id<ENAccountPublicKey>)arg1 ;
@end

