/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _LTTranslationStatistics : NSObject <NSSecureCoding, NSCopying> {

	long long _inputTokenCount;
	long long _inputSubtokenCount;

}

@property (assign,nonatomic) long long inputTokenCount;                 //@synthesize inputTokenCount=_inputTokenCount - In the implementation block
@property (assign,nonatomic) long long inputSubtokenCount;              //@synthesize inputSubtokenCount=_inputSubtokenCount - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)_countWithTokenString:(id)arg1 countCharacters:(BOOL)arg2 ;
+(id)statisticsWithEngineMeta:(id)arg1 locale:(id)arg2 ;
-(void)setInputTokenCount:(long long)arg1 ;
-(void)setInputSubtokenCount:(long long)arg1 ;
-(long long)inputTokenCount;
-(long long)inputSubtokenCount;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

