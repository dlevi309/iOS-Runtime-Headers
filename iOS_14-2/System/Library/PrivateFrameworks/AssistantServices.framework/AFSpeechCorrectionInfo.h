/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AFSpeechCorrectionInfo : NSObject <NSSecureCoding> {

	long long _alternativeSelectionCount;
	long long _characterModificationCount;
	long long _characterInsertionCount;
	long long _characterSubstitutionCount;
	long long _characterDeletionCount;
	NSString* _correctedText;

}

@property (assign,nonatomic) long long alternativeSelectionCount;               //@synthesize alternativeSelectionCount=_alternativeSelectionCount - In the implementation block
@property (assign,nonatomic) long long characterModificationCount;              //@synthesize characterModificationCount=_characterModificationCount - In the implementation block
@property (assign,nonatomic) long long characterInsertionCount;                 //@synthesize characterInsertionCount=_characterInsertionCount - In the implementation block
@property (assign,nonatomic) long long characterSubstitutionCount;              //@synthesize characterSubstitutionCount=_characterSubstitutionCount - In the implementation block
@property (assign,nonatomic) long long characterDeletionCount;                  //@synthesize characterDeletionCount=_characterDeletionCount - In the implementation block
@property (nonatomic,copy) NSString * correctedText;                            //@synthesize correctedText=_correctedText - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)alternativeSelectionCount;
-(void)setAlternativeSelectionCount:(long long)arg1 ;
-(long long)characterModificationCount;
-(void)setCharacterModificationCount:(long long)arg1 ;
-(NSString *)correctedText;
-(void)setCorrectedText:(NSString *)arg1 ;
-(long long)characterInsertionCount;
-(void)setCharacterInsertionCount:(long long)arg1 ;
-(long long)characterDeletionCount;
-(void)setCharacterDeletionCount:(long long)arg1 ;
-(long long)characterSubstitutionCount;
-(void)setCharacterSubstitutionCount:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

