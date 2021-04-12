/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)urlString;
-(NSString *)sourceLanguage;
-(NSString *)targetLanguage;
-(id)initWithURLString:(id)arg1 sourceLanguage:(id)arg2 targetLanguage:(id)arg3 ;
@end

