/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <CallKit/CallKit-Structs.h>
#import <CallKit/CXAction.h>

@class NSString, NSUUID;

@interface CXSendMMIOrUSSDCodeAction : CXAction {

	NSString* _code;
	long long _ttyType;
	NSUUID* _senderIdentityUUID;

}

@property (nonatomic,copy) NSString * code;                            //@synthesize code=_code - In the implementation block
@property (assign,nonatomic) long long ttyType;                        //@synthesize ttyType=_ttyType - In the implementation block
@property (nonatomic,retain) NSUUID * senderIdentityUUID;              //@synthesize senderIdentityUUID=_senderIdentityUUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)code;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setCode:(NSString *)arg1 ;
-(id)customDescription;
-(long long)ttyType;
-(void)setTtyType:(long long)arg1 ;
-(NSUUID *)senderIdentityUUID;
-(void)updateCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(id)sanitizedCopyWithZone:(NSZone*)arg1 ;
-(void)setSenderIdentityUUID:(NSUUID *)arg1 ;
@end

