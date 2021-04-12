/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/


@interface CHRecognizerOptions : NSObject {

	BOOL _enableCachingIfAvailable;
	BOOL _enableGen2ModelIfAvailable;
	BOOL _enableGen2CharacterLMIfAvailable;

}

@property (assign,nonatomic) BOOL enableCachingIfAvailable;                      //@synthesize enableCachingIfAvailable=_enableCachingIfAvailable - In the implementation block
@property (assign,nonatomic) BOOL enableGen2ModelIfAvailable;                    //@synthesize enableGen2ModelIfAvailable=_enableGen2ModelIfAvailable - In the implementation block
@property (assign,nonatomic) BOOL enableGen2CharacterLMIfAvailable;              //@synthesize enableGen2CharacterLMIfAvailable=_enableGen2CharacterLMIfAvailable - In the implementation block
-(id)init;
-(BOOL)enableCachingIfAvailable;
-(void)setEnableCachingIfAvailable:(BOOL)arg1 ;
-(BOOL)enableGen2ModelIfAvailable;
-(void)setEnableGen2ModelIfAvailable:(BOOL)arg1 ;
-(BOOL)enableGen2CharacterLMIfAvailable;
-(void)setEnableGen2CharacterLMIfAvailable:(BOOL)arg1 ;
@end

