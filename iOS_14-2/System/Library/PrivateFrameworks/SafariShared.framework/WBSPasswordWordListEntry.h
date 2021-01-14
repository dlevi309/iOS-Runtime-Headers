/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class NSString;

@interface WBSPasswordWordListEntry : NSObject {

	BOOL _sensitive;
	NSString* _word;
	NSString* _wordListIdentifier;
	unsigned long long _guessesRequired;

}

@property (nonatomic,copy,readonly) NSString * word;                            //@synthesize word=_word - In the implementation block
@property (getter=isSensitive,nonatomic,readonly) BOOL sensitive;               //@synthesize sensitive=_sensitive - In the implementation block
@property (nonatomic,copy,readonly) NSString * wordListIdentifier;              //@synthesize wordListIdentifier=_wordListIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long guessesRequired;              //@synthesize guessesRequired=_guessesRequired - In the implementation block
-(BOOL)isSensitive;
-(NSString *)word;
-(id)description;
-(unsigned long long)guessesRequired;
-(id)initWithWord:(id)arg1 isSensitive:(BOOL)arg2 wordListIdentifier:(id)arg3 guessesRequired:(unsigned long long)arg4 ;
-(NSString *)wordListIdentifier;
@end

