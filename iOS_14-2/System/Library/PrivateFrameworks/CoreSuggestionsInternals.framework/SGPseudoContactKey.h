/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <libobjc.A.dylib/SGEntityKey.h>

@class SGIdentityKey, NSString;

@interface SGPseudoContactKey : NSObject <SGEntityKey> {

	SGIdentityKey* _identityKey;

}

@property (nonatomic,readonly) SGIdentityKey * identityKey;              //@synthesize identityKey=_identityKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isSupportedEntityType:(long long)arg1 ;
-(SGIdentityKey *)identityKey;
-(id)serialize;
-(id)initWithNormalizedEmail:(id)arg1 ;
-(id)initWithSerialized:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithIdentityKey:(id)arg1 ;
-(BOOL)isEqualToPseudoContactKey:(id)arg1 ;
-(id)initWithEmail:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

