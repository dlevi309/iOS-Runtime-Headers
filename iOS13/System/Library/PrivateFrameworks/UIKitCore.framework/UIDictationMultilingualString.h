/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSString, NSArray;

@interface UIDictationMultilingualString : NSObject {

	NSString* _text;
	NSString* _dominantLanguage;
	id _correctionIdentifier;
	NSString* _interactionIdentifier;
	NSArray* _phrases;

}

@property (nonatomic,copy) NSString * text;                                 //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * dominantLanguage;                     //@synthesize dominantLanguage=_dominantLanguage - In the implementation block
@property (nonatomic,retain) id correctionIdentifier;                       //@synthesize correctionIdentifier=_correctionIdentifier - In the implementation block
@property (nonatomic,retain) NSString * interactionIdentifier;              //@synthesize interactionIdentifier=_interactionIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * phrases;                               //@synthesize phrases=_phrases - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)dominantLanguage;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)dictionaryValue;
-(NSString *)interactionIdentifier;
-(void)setInteractionIdentifier:(NSString *)arg1 ;
-(NSArray *)phrases;
-(id)correctionIdentifier;
-(id)initWithText:(id)arg1 forLanguage:(id)arg2 ;
-(void)setDominantLanguage:(NSString *)arg1 ;
-(void)setCorrectionIdentifier:(id)arg1 ;
-(void)setPhrases:(NSArray *)arg1 ;
@end

