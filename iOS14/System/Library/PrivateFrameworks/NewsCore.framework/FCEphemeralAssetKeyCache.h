/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCAssetKeyCacheType.h>

@class FCThreadSafeMutableDictionary, NSString;

@interface FCEphemeralAssetKeyCache : NSObject <FCAssetKeyCacheType> {

	FCThreadSafeMutableDictionary* _dictionary;

}

@property (nonatomic,readonly) FCThreadSafeMutableDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)removeAllWrappingKeys;
-(id)wrappingKeyForWrappingKeyID:(id)arg1 ;
-(FCThreadSafeMutableDictionary *)dictionary;
-(void)setWrappingKey:(id)arg1 forWrappingKeyID:(id)arg2 ;
@end

