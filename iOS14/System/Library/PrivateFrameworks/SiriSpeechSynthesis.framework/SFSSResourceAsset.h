/*
* Generated on Thursday, January 14, 2021 at 2:29:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
*/


@class NSString;

@interface SFSSResourceAsset : NSObject {

	NSString* _assetPath;
	NSString* _language;
	long long _contentVersion;

}

@property (nonatomic,copy) NSString * assetPath;                      //@synthesize assetPath=_assetPath - In the implementation block
@property (nonatomic,copy,readonly) NSString * language;              //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) long long contentVersion;              //@synthesize contentVersion=_contentVersion - In the implementation block
+(id)generateResourceAssetFromResourceKeyString:(id)arg1 ;
-(id)key;
-(long long)contentVersion;
-(NSString *)assetPath;
-(void)setAssetPath:(NSString *)arg1 ;
-(NSString *)language;
-(id)init:(id)arg1 contentVersion:(long long)arg2 ;
@end

