/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGQuestionFactory.h>

@class NSDictionary, PGManager, NSString;

@interface PGSurveyQuestionFactory : NSObject <PGQuestionFactory> {

	NSDictionary* _existingQuestionsByEntityIdentifier;
	PGManager* _manager;

}

@property (nonatomic,retain) NSDictionary * existingQuestionsByEntityIdentifier;              //@synthesize existingQuestionsByEntityIdentifier=_existingQuestionsByEntityIdentifier - In the implementation block
@property (nonatomic,retain) PGManager * manager;                                             //@synthesize manager=_manager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long questionOptions; 
@property (nonatomic,readonly) unsigned short questionType; 
-(id)initWithManager:(id)arg1 ;
-(PGManager *)manager;
-(void)setManager:(PGManager *)arg1 ;
-(unsigned short)questionType;
-(long long)questionOptions;
-(id)generateQuestionsWithLimit:(unsigned long long)arg1 progressBlock:(/*^block*/id)arg2 ;
-(BOOL)questionAlreadyExists:(id)arg1 ;
-(BOOL)shouldAddQuestion:(id)arg1 toAlreadyGeneratedQuestions:(id)arg2 ;
-(id)fetchExistingQuestions;
-(NSDictionary *)existingQuestionsByEntityIdentifier;
-(id)_questionsByEntityIdentifierFromQuestions:(id)arg1 ;
-(id)keyAssetFromMomentNode:(id)arg1 ;
-(id)curatedAssetsFromMomentNode:(id)arg1 ;
-(id)representativeCuratedAssetsFromMomentNode:(id)arg1 ;
-(void)setExistingQuestionsByEntityIdentifier:(NSDictionary *)arg1 ;
@end

