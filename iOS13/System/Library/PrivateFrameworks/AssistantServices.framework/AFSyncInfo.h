/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, SASyncAppMetaData, NSSet;

@interface AFSyncInfo : NSObject <NSSecureCoding> {

	BOOL _targetIsLocal;
	BOOL _forVerification;
	NSString* _anchor;
	NSString* _validity;
	long long _count;
	NSString* _key;
	SASyncAppMetaData* _appMetadata;
	NSSet* _reasons;

}

@property (nonatomic,copy) NSString * anchor;                            //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,copy) NSString * validity;                          //@synthesize validity=_validity - In the implementation block
@property (assign,nonatomic) long long count;                            //@synthesize count=_count - In the implementation block
@property (nonatomic,copy) NSString * key;                               //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) SASyncAppMetaData * appMetadata;              //@synthesize appMetadata=_appMetadata - In the implementation block
@property (assign,nonatomic) BOOL targetIsLocal;                         //@synthesize targetIsLocal=_targetIsLocal - In the implementation block
@property (assign,nonatomic) BOOL forVerification;                       //@synthesize forVerification=_forVerification - In the implementation block
@property (nonatomic,copy) NSSet * reasons;                              //@synthesize reasons=_reasons - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(long long)count;
-(NSString *)key;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setCount:(long long)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(NSSet *)reasons;
-(void)setReasons:(NSSet *)arg1 ;
-(NSString *)anchor;
-(void)setAnchor:(NSString *)arg1 ;
-(NSString *)validity;
-(void)setValidity:(NSString *)arg1 ;
-(void)setAppMetadata:(SASyncAppMetaData *)arg1 ;
-(id)initWithAnchor:(id)arg1 forcingReset:(BOOL)arg2 ;
-(SASyncAppMetaData *)appMetadata;
-(BOOL)targetIsLocal;
-(void)setTargetIsLocal:(BOOL)arg1 ;
-(BOOL)forVerification;
-(void)setForVerification:(BOOL)arg1 ;
@end

