/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString;

@interface AXIPCMessage : NSObject <NSSecureCoding> {

	int _key;
	unsigned _clientPort;
	NSDictionary* _payload;
	SCD_Struct_AX4 _auditToken;

}

@property (assign,nonatomic) int key;                                       //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSDictionary * payload;                          //@synthesize payload=_payload - In the implementation block
@property (assign,nonatomic) unsigned clientPort;                           //@synthesize clientPort=_clientPort - In the implementation block
@property (assign,nonatomic) SCD_Struct_AX4 auditToken;                     //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,copy,readonly) NSString * senderBundleId; 
+(BOOL)supportsSecureCoding;
+(id)archivedMessageFromData:(id)arg1 ;
-(void)setPayload:(NSDictionary *)arg1 ;
-(id)initWithKey:(int)arg1 ;
-(NSString *)senderBundleId;
-(void)setAuditToken:(SCD_Struct_AX4)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithKey:(int)arg1 payload:(id)arg2 keyDebugInfo:(id)arg3 ;
-(SCD_Struct_AX4)auditToken;
-(NSDictionary *)payload;
-(id)description;
-(id)initWithKey:(int)arg1 payload:(id)arg2 ;
-(int)key;
-(unsigned)clientPort;
-(id)initWithCoder:(id)arg1 ;
-(void)setClientPort:(unsigned)arg1 ;
-(void)setKey:(int)arg1 ;
-(void)dealloc;
@end

