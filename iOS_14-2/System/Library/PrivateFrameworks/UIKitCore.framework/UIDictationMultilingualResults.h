/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSArray, NSString;

@interface UIDictationMultilingualResults : NSObject {

	NSArray* _phrases;
	NSString* _dominantLanguage;

}

@property (nonatomic,copy) NSArray * phrases;                        //@synthesize phrases=_phrases - In the implementation block
@property (nonatomic,copy) NSString * dominantLanguage;              //@synthesize dominantLanguage=_dominantLanguage - In the implementation block
-(NSArray *)phrases;
-(NSString *)dominantLanguage;
-(id)initWithPhrases:(id)arg1 dominantLanguage:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPhrases:(NSArray *)arg1 ;
-(void)setDominantLanguage:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

