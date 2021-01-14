/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@class NSString;

@interface WBSTranslationInformation : NSObject {

	NSString* _urlString;
	NSString* _sourceLanguage;
	NSString* _targetLanguage;

}

@property (nonatomic,copy,readonly) NSString * urlString;                   //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourceLanguage;              //@synthesize sourceLanguage=_sourceLanguage - In the implementation block
@property (nonatomic,copy,readonly) NSString * targetLanguage;              //@synthesize targetLanguage=_targetLanguage - In the implementation block
-(NSString *)urlString;
-(id)init;
-(NSString *)sourceLanguage;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)targetLanguage;
-(id)initWithURLString:(id)arg1 sourceLanguage:(id)arg2 targetLanguage:(id)arg3 ;
@end

