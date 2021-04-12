/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CKContainerID : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isTestContainer;
	BOOL _isAppleInternal;
	NSString* _containerIdentifier;
	long long _environment;
	long long _specialContainerType;

}

@property (assign,nonatomic) long long specialContainerType;                     //@synthesize specialContainerType=_specialContainerType - In the implementation block
@property (assign,nonatomic) BOOL isTestContainer;                               //@synthesize isTestContainer=_isTestContainer - In the implementation block
@property (assign,nonatomic) BOOL isAppleInternal;                               //@synthesize isAppleInternal=_isAppleInternal - In the implementation block
@property (nonatomic,copy,readonly) NSString * containerIdentifier;              //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,readonly) long long environment;                            //@synthesize environment=_environment - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)_deriveContainerAttributes;
-(id)ckShortDescription;
-(void)setIsAppleInternal:(BOOL)arg1 ;
-(id)initWithContainerIdentifier:(id)arg1 environment:(long long)arg2 ;
-(void)ck_bindInStatement:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)CKPropertiesDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)representativeDataclass;
-(NSString *)containerIdentifier;
-(void)setIsTestContainer:(BOOL)arg1 ;
-(id)initWithSqliteRepresentation:(id)arg1 ;
-(id)description;
-(BOOL)isTestContainer;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)sqliteRepresentation;
-(long long)environment;
-(BOOL)isAppleInternal;
-(void)setSpecialContainerType:(long long)arg1 ;
-(long long)specialContainerType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

