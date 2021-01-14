/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <ContactsUICore/ContactsUICore-Structs.h>
#import <libobjc.A.dylib/_CNUILikenessFingerprintImpl.h>

@class NSArray, CNUILikenessRenderingScope, NSString;

@interface _CNUILikenessFingerprintGroupImpl : NSObject <_CNUILikenessFingerprintImpl> {

	NSArray* _impls;
	CNUILikenessRenderingScope* _scope;

}

@property (copy,readonly) NSArray * impls;                                 //@synthesize impls=_impls - In the implementation block
@property (copy,readonly) CNUILikenessRenderingScope * scope;              //@synthesize scope=_scope - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CNUILikenessRenderingScope *)scope;
-(NSArray *)impls;
-(NSString *)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithImpls:(id)arg1 scope:(id)arg2 ;
-(BOOL)hasContactIdentifier:(id)arg1 ;
@end

