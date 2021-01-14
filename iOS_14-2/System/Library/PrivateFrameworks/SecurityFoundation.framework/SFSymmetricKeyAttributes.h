/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/_SFKeyAttributes.h>
#import <libobjc.A.dylib/SFKeychainItemAttributes.h>

@class _SFKeySpecifier, NSString;

@interface SFSymmetricKeyAttributes : NSObject <_SFKeyAttributes, SFKeychainItemAttributes> {

	id _symmetricKeyAttributesInternal;
	NSString* persistentIdentifier;

}

@property (nonatomic,copy,readonly) _SFKeySpecifier * keySpecifier; 
@property (nonatomic,copy,readonly) NSString * keyDomain; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * localizedLabel; 
@property (nonatomic,copy) NSString * localizedDescription; 
@property (nonatomic,copy,readonly) NSString * persistentIdentifier; 
-(void)setKeySpecifier:(_SFKeySpecifier *)arg1 ;
-(void)setLocalizedLabel:(NSString *)arg1 ;
-(NSString *)localizedLabel;
-(id)initWithSpecifier:(id)arg1 domain:(id)arg2 ;
-(id)initWithSpecifier:(id)arg1 ;
-(NSString *)persistentIdentifier;
-(NSString *)localizedDescription;
-(NSString *)keyDomain;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_SFKeySpecifier *)keySpecifier;
@end

