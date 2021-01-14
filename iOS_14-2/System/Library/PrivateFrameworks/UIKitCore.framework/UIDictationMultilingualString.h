/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)phrases;
-(NSString *)dominantLanguage;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setPhrases:(NSArray *)arg1 ;
-(void)setDominantLanguage:(NSString *)arg1 ;
-(id)description;
-(void)setCorrectionIdentifier:(id)arg1 ;
-(id)correctionIdentifier;
-(id)initWithText:(id)arg1 forLanguage:(id)arg2 ;
-(NSString *)text;
-(unsigned long long)hash;
-(NSString *)interactionIdentifier;
-(id)dictionaryValue;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setInteractionIdentifier:(NSString *)arg1 ;
@end

