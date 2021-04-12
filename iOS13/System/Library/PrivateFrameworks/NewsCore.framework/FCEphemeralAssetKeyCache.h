/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(FCThreadSafeMutableDictionary *)dictionary;
-(id)wrappingKeyForWrappingKeyID:(id)arg1 ;
-(void)removeAllWrappingKeys;
-(void)setWrappingKey:(id)arg1 forWrappingKeyID:(id)arg2 ;
@end

