/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSWPTextStatistics : NSObject <NSCopying> {

	unsigned long long _wordCount;
	unsigned long long _charactersNoWhiteSpace;
	unsigned long long _paragraphCount;
	BOOL _isAccurate;

}

@property (assign,nonatomic) unsigned long long wordCount;                           //@synthesize wordCount=_wordCount - In the implementation block
@property (assign,nonatomic) unsigned long long charactersNoWhiteSpace;              //@synthesize charactersNoWhiteSpace=_charactersNoWhiteSpace - In the implementation block
@property (assign,nonatomic) unsigned long long paragraphCount;                      //@synthesize paragraphCount=_paragraphCount - In the implementation block
@property (assign,nonatomic) BOOL isAccurate;                                        //@synthesize isAccurate=_isAccurate - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)resetStatistics;
-(unsigned long long)wordCount;
-(unsigned long long)paragraphCount;
-(void)setWordCount:(unsigned long long)arg1 ;
-(BOOL)isAccurate;
-(void)setCharactersNoWhiteSpace:(unsigned long long)arg1 ;
-(void)setParagraphCount:(unsigned long long)arg1 ;
-(void)setIsAccurate:(BOOL)arg1 ;
-(unsigned long long)charactersNoWhiteSpace;
-(void)setTextStatistics:(id)arg1 ;
-(void)addTextStatistics:(id)arg1 ;
-(void)removeTextStatistics:(id)arg1 ;
@end

