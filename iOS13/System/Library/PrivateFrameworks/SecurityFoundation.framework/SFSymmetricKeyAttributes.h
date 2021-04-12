/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localizedDescription;
-(NSString *)persistentIdentifier;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(NSString *)localizedLabel;
-(id)initWithSpecifier:(id)arg1 ;
-(void)setLocalizedLabel:(NSString *)arg1 ;
-(_SFKeySpecifier *)keySpecifier;
-(NSString *)keyDomain;
-(id)initWithSpecifier:(id)arg1 domain:(id)arg2 ;
-(void)setKeySpecifier:(_SFKeySpecifier *)arg1 ;
@end

