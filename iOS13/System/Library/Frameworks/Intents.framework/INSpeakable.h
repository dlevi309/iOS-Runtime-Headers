/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSString, NSArray;


@protocol INSpeakable <NSObject>
@property (nonatomic,readonly) NSString * spokenPhrase; 
@property (nonatomic,readonly) NSString * pronunciationHint; 
@property (nonatomic,readonly) NSString * vocabularyIdentifier; 
@property (nonatomic,readonly) NSArray * alternativeSpeakableMatches; 
@property (nonatomic,readonly) NSString * identifier; 
@optional
-(NSString *)identifier;

@required
-(NSString *)spokenPhrase;
-(NSString *)pronunciationHint;
-(NSString *)vocabularyIdentifier;
-(NSArray *)alternativeSpeakableMatches;

@end

