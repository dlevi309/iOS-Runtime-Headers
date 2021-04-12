/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/MobileAccessoryUpdater
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface FudPersonalizationObjectInfo : NSObject <NSSecureCoding> {

	BOOL _esecSet;
	BOOL _eproSet;
	BOOL _trustedSet;
	BOOL _trusted;
	BOOL _effectiveProductionMode;
	BOOL _effectiveSecurityMode;
	NSString* _objectTag;
	NSData* _digest;

}

@property (nonatomic,copy,readonly) NSString * objectTag;               //@synthesize objectTag=_objectTag - In the implementation block
@property (nonatomic,retain) NSData * digest;                           //@synthesize digest=_digest - In the implementation block
@property (assign,nonatomic) BOOL trusted;                              //@synthesize trusted=_trusted - In the implementation block
@property (assign,nonatomic) BOOL effectiveProductionMode;              //@synthesize effectiveProductionMode=_effectiveProductionMode - In the implementation block
@property (assign,nonatomic) BOOL effectiveSecurityMode;                //@synthesize effectiveSecurityMode=_effectiveSecurityMode - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTag:(id)arg1 ;
-(void)setTrusted:(BOOL)arg1 ;
-(BOOL)trusted;
-(NSData *)digest;
-(void)setDigest:(NSData *)arg1 ;
-(void)setEffectiveProductionMode:(BOOL)arg1 ;
-(void)setEffectiveSecurityMode:(BOOL)arg1 ;
-(BOOL)isTrustedSet;
-(BOOL)isEffectiveProductionModeSet;
-(BOOL)isEffectiveSecurityModeSet;
-(NSString *)objectTag;
-(BOOL)effectiveProductionMode;
-(BOOL)effectiveSecurityMode;
@end

