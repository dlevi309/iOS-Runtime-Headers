/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <libobjc.A.dylib/SGEntityKey.h>

@class SGIdentityKey, NSString;

@interface SGContactDetailKey : NSObject <SGEntityKey> {

	SGIdentityKey* _identityKey;
	NSString* _label;
	NSString* _value;

}

@property (nonatomic,readonly) SGIdentityKey * identityKey;              //@synthesize identityKey=_identityKey - In the implementation block
@property (nonatomic,readonly) NSString * label;                         //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSString * value;                         //@synthesize value=_value - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)prefixForForIdentityKey:(id)arg1 ;
+(BOOL)isSupportedEntityType:(long long)arg1 ;
-(SGIdentityKey *)identityKey;
-(id)serialize;
-(id)initWithSerialized:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithIdentityKey:(id)arg1 label:(id)arg2 normalizedValue:(id)arg3 ;
-(NSString *)label;
-(NSString *)value;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToContactDetailKey:(id)arg1 ;
@end

