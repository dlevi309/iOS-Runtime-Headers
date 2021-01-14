/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class NSDictionary;

@interface WBSPasswordBreachConfigurationDictionaryUnpacker : NSObject {

	NSDictionary* _dictionary;
	BOOL _errorOccurred;

}

@property (nonatomic,readonly) BOOL errorOccurred;              //@synthesize errorOccurred=_errorOccurred - In the implementation block
-(id)URLForKey:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)stringForKey:(id)arg1 minimumLength:(unsigned long long)arg2 ;
-(unsigned long long)unsignedIntegerForKey:(id)arg1 minimumValue:(unsigned long long)arg2 maximumValue:(unsigned long long)arg3 ;
-(BOOL)errorOccurred;
-(id)_valueOfClass:(Class)arg1 forKey:(id)arg2 required:(BOOL)arg3 ;
-(id)sortedUnsignedIntegerArrayForKey:(id)arg1 minimumValue:(unsigned long long)arg2 maximumValue:(unsigned long long)arg3 ascending:(BOOL)arg4 ;
-(id)dataFromHexStringForKey:(id)arg1 expectedLength:(id)arg2 ;
-(BOOL)optionalBoolForKey:(id)arg1 defaultValue:(BOOL)arg2 ;
@end

