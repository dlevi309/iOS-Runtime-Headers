/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)dominantLanguage;
-(id)initWithPhrases:(id)arg1 dominantLanguage:(id)arg2 ;
-(NSArray *)phrases;
-(void)setDominantLanguage:(NSString *)arg1 ;
-(void)setPhrases:(NSArray *)arg1 ;
@end

