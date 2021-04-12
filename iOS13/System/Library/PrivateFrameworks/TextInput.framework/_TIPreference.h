/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)preferenceWithKey:(id)arg1 domain:(id)arg2 defaultValue:(id)arg3 ;
+(id)preferenceWithKey:(id)arg1 domain:(id)arg2 defaultValue:(id)arg3 fallbackKey:(id)arg4 ;
-(NSString *)key;
-(NSString *)domain;
-(void)setKey:(NSString *)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(id)defaultValue;
-(void)setDefaultValue:(id)arg1 ;
-(id)currentValue;
-(void)setCurrentValue:(id)arg1 ;
-(void)setFallbackKey:(NSString *)arg1 ;
-(NSString *)fallbackKey;
@end

