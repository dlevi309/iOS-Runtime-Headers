/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface UIDraggingSystemSessionInfo : NSObject <NSSecureCoding> {

	BOOL _supportsSystemDrag;
	unsigned _sessionIdentifier;
	int _processIdentifier;
	NSString* _sceneIdentifier;
	SCD_Struct_UI52 _auditToken;

}

@property (assign,nonatomic) unsigned sessionIdentifier;              //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (assign,nonatomic) int processIdentifier;                   //@synthesize processIdentifier=_processIdentifier - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI52 auditToken;              //@synthesize auditToken=_auditToken - In the implementation block
@property (assign,nonatomic) BOOL supportsSystemDrag;                 //@synthesize supportsSystemDrag=_supportsSystemDrag - In the implementation block
@property (nonatomic,copy) NSString * sceneIdentifier;                //@synthesize sceneIdentifier=_sceneIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)processIdentifier;
-(SCD_Struct_UI52)auditToken;
-(void)setSupportsSystemDrag:(BOOL)arg1 ;
-(unsigned)sessionIdentifier;
-(NSString *)sceneIdentifier;
-(void)setSceneIdentifier:(NSString *)arg1 ;
-(BOOL)supportsSystemDrag;
-(void)setSessionIdentifier:(unsigned)arg1 ;
-(void)setProcessIdentifier:(int)arg1 ;
-(void)setAuditToken:(SCD_Struct_UI52)arg1 ;
@end

