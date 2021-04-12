/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputChinese.framework/TextInputChinese
*/


@class TIKeyboardCandidate, NSString, NSArray;

@interface TIConvertedCandidate : NSObject {

	TIKeyboardCandidate* _candidate;
	NSString* _convertedInput;
	NSString* _replacedAmbiguousPinyinSyllable;
	NSString* _replacementUnambiguousPinyinSyllable;
	NSArray* _geometryData;
	NSArray* _touchData;

}

@property (nonatomic,retain) TIKeyboardCandidate * candidate;                            //@synthesize candidate=_candidate - In the implementation block
@property (nonatomic,copy) NSString * convertedInput;                                    //@synthesize convertedInput=_convertedInput - In the implementation block
@property (nonatomic,readonly) NSString * revertedInput; 
@property (nonatomic,copy) NSString * replacedAmbiguousPinyinSyllable;                   //@synthesize replacedAmbiguousPinyinSyllable=_replacedAmbiguousPinyinSyllable - In the implementation block
@property (nonatomic,copy) NSString * replacementUnambiguousPinyinSyllable;              //@synthesize replacementUnambiguousPinyinSyllable=_replacementUnambiguousPinyinSyllable - In the implementation block
@property (nonatomic,copy) NSArray * geometryData;                                       //@synthesize geometryData=_geometryData - In the implementation block
@property (nonatomic,copy) NSArray * touchData;                                          //@synthesize touchData=_touchData - In the implementation block
-(TIKeyboardCandidate *)candidate;
-(id)initWithCandidate:(id)arg1 ;
-(void)setCandidate:(TIKeyboardCandidate *)arg1 ;
-(NSString *)convertedInput;
-(id)initWithCandidate:(id)arg1 replacedAmbiguousPinyinSyllable:(id)arg2 replacementUnambiguousPinyinSyllable:(id)arg3 convertedInput:(id)arg4 ;
-(NSString *)revertedInput;
-(void)setConvertedInput:(NSString *)arg1 ;
-(NSString *)replacedAmbiguousPinyinSyllable;
-(void)setReplacedAmbiguousPinyinSyllable:(NSString *)arg1 ;
-(NSString *)replacementUnambiguousPinyinSyllable;
-(void)setReplacementUnambiguousPinyinSyllable:(NSString *)arg1 ;
-(NSArray *)geometryData;
-(void)setGeometryData:(NSArray *)arg1 ;
-(NSArray *)touchData;
-(void)setTouchData:(NSArray *)arg1 ;
@end

