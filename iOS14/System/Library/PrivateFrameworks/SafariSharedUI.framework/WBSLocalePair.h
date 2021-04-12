/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@class NSLocale, NSString, _LTLocalePair;

@interface WBSLocalePair : NSObject {

	NSLocale* _sourceLocale;
	NSLocale* _targetLocale;

}

@property (nonatomic,readonly) NSLocale * sourceLocale;                                   //@synthesize sourceLocale=_sourceLocale - In the implementation block
@property (nonatomic,readonly) NSLocale * targetLocale;                                   //@synthesize targetLocale=_targetLocale - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourceLocaleIdentifier; 
@property (nonatomic,copy,readonly) NSString * targetLocaleIdentifier; 
@property (nonatomic,copy,readonly) NSString * compactDescriptionForLogging; 
@property (nonatomic,readonly) _LTLocalePair * lt_localePair; 
-(id)description;
-(NSLocale *)sourceLocale;
-(NSLocale *)targetLocale;
-(id)initWithSourceLocale:(id)arg1 targetLocale:(id)arg2 ;
-(NSString *)sourceLocaleIdentifier;
-(NSString *)targetLocaleIdentifier;
-(id)initWithLTLocalePair:(id)arg1 ;
-(NSString *)compactDescriptionForLogging;
-(id)initWithSourceLocaleIdentifier:(id)arg1 targetLocaleIdentifier:(id)arg2 ;
-(_LTLocalePair *)lt_localePair;
@end

