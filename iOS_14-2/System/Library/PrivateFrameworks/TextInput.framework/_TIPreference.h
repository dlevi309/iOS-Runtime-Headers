/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/


@class NSString;

@interface _TIPreference : NSObject {

	NSString* _key;
	NSString* _domain;
	NSString* _fallbackKey;
	id _defaultValue;
	id _currentValue;

}

@property (nonatomic,retain) NSString * key;                      //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSString * domain;                   //@synthesize domain=_domain - In the implementation block
@property (nonatomic,retain) NSString * fallbackKey;              //@synthesize fallbackKey=_fallbackKey - In the implementation block
@property (nonatomic,retain) id defaultValue;                     //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,retain) id currentValue;                     //@synthesize currentValue=_currentValue - In the implementation block
+(id)preferenceWithKey:(id)arg1 domain:(id)arg2 defaultValue:(id)arg3 fallbackKey:(id)arg4 ;
+(id)preferenceWithKey:(id)arg1 domain:(id)arg2 defaultValue:(id)arg3 ;
-(void)setDefaultValue:(id)arg1 ;
-(id)defaultValue;
-(NSString *)fallbackKey;
-(void)setDomain:(NSString *)arg1 ;
-(NSString *)domain;
-(void)setFallbackKey:(NSString *)arg1 ;
-(NSString *)key;
-(id)currentValue;
-(void)setCurrentValue:(id)arg1 ;
-(void)setKey:(NSString *)arg1 ;
@end

