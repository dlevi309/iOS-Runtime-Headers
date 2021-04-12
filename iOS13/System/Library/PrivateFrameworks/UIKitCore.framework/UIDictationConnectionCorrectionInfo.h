/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString;

@interface UIDictationConnectionCorrectionInfo : NSObject {

	int _alternativeSelectionCount;
	int _characterModificationCount;
	int _characterInsertionCount;
	int _characterDeletionCount;
	int _characterSubstitutionCount;
	NSString* _correctedText;

}

@property (assign,nonatomic) int alternativeSelectionCount;               //@synthesize alternativeSelectionCount=_alternativeSelectionCount - In the implementation block
@property (assign,nonatomic) int characterModificationCount;              //@synthesize characterModificationCount=_characterModificationCount - In the implementation block
@property (assign,nonatomic) int characterInsertionCount;                 //@synthesize characterInsertionCount=_characterInsertionCount - In the implementation block
@property (assign,nonatomic) int characterDeletionCount;                  //@synthesize characterDeletionCount=_characterDeletionCount - In the implementation block
@property (assign,nonatomic) int characterSubstitutionCount;              //@synthesize characterSubstitutionCount=_characterSubstitutionCount - In the implementation block
@property (nonatomic,copy) NSString * correctedText;                      //@synthesize correctedText=_correctedText - In the implementation block
-(int)alternativeSelectionCount;
-(void)setAlternativeSelectionCount:(int)arg1 ;
-(int)characterModificationCount;
-(void)setCharacterModificationCount:(int)arg1 ;
-(NSString *)correctedText;
-(void)setCorrectedText:(NSString *)arg1 ;
-(int)characterInsertionCount;
-(void)setCharacterInsertionCount:(int)arg1 ;
-(int)characterDeletionCount;
-(void)setCharacterDeletionCount:(int)arg1 ;
-(int)characterSubstitutionCount;
-(void)setCharacterSubstitutionCount:(int)arg1 ;
@end

