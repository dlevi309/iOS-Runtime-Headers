/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_UI60 _auditToken;

}

@property (assign,nonatomic) unsigned sessionIdentifier;              //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (assign,nonatomic) int processIdentifier;                   //@synthesize processIdentifier=_processIdentifier - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI60 auditToken;              //@synthesize auditToken=_auditToken - In the implementation block
@property (assign,nonatomic) BOOL supportsSystemDrag;                 //@synthesize supportsSystemDrag=_supportsSystemDrag - In the implementation block
@property (nonatomic,copy) NSString * sceneIdentifier;                //@synthesize sceneIdentifier=_sceneIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setSceneIdentifier:(NSString *)arg1 ;
-(int)processIdentifier;
-(NSString *)sceneIdentifier;
-(void)setProcessIdentifier:(int)arg1 ;
-(void)setAuditToken:(SCD_Struct_UI60)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(SCD_Struct_UI60)auditToken;
-(void)setSessionIdentifier:(unsigned)arg1 ;
-(unsigned)sessionIdentifier;
-(id)description;
-(BOOL)supportsSystemDrag;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setSupportsSystemDrag:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

