/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(int)key;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SCD_Struct_AX4)auditToken;
-(id)initWithKey:(int)arg1 ;
-(void)setKey:(int)arg1 ;
-(void)setPayload:(NSDictionary *)arg1 ;
-(NSDictionary *)payload;
-(void)setClientPort:(unsigned)arg1 ;
-(void)setAuditToken:(SCD_Struct_AX4)arg1 ;
-(id)initWithKey:(int)arg1 payload:(id)arg2 ;
-(NSString *)senderBundleId;
-(unsigned)clientPort;
-(id)initWithKey:(int)arg1 payload:(id)arg2 keyDebugInfo:(id)arg3 ;
@end

