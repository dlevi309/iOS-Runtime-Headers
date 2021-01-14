/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PhotosGraph-Structs.h>
#import <libobjc.A.dylib/PGQuestionFactory.h>

@class NSDictionary, PGManager, NSString;

@interface PGSurveyQuestionFactory : NSObject <PGQuestionFactory> {

	BOOL _ignoreExistingQuestions;
	NSDictionary* _existingQuestionsByEntityIdentifier;
	PGManager* _manager;

}

@property (assign,nonatomic) BOOL ignoreExistingQuestions;                                    //@synthesize ignoreExistingQuestions=_ignoreExistingQuestions - In the implementation block
@property (nonatomic,retain) NSDictionary * existingQuestionsByEntityIdentifier;              //@synthesize existingQuestionsByEntityIdentifier=_existingQuestionsByEntityIdentifier - In the implementation block
@property (nonatomic,retain) PGManager * manager;                                             //@synthesize manager=_manager - In the implementation block
@property (nonatomic,readonly) long long questionOptions; 
@property (nonatomic,readonly) unsigned short questionType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithManager:(id)arg1 ;
-(void)setManager:(PGManager *)arg1 ;
-(unsigned short)questionType;
-(PGManager *)manager;
-(long long)questionOptions;
-(id)generateQuestionsWithLimit:(unsigned long long)arg1 progressBlock:(/*^block*/id)arg2 ;
-(BOOL)questionAlreadyExists:(id)arg1 ;
-(id)existingQuestionsForEntityIdentifier:(id)arg1 ;
-(BOOL)shouldAddQuestion:(id)arg1 toAlreadyGeneratedQuestions:(id)arg2 ;
-(id)fetchExistingQuestions;
-(NSDictionary *)existingQuestionsByEntityIdentifier;
-(id)_questionsByEntityIdentifierFromQuestions:(id)arg1 ;
-(id)keyAssetFromMomentNode:(id)arg1 ;
-(id)curatedAssetsFromMomentNode:(id)arg1 ;
-(id)assetFromMomentNode:(id)arg1 closestToLocationCoordinate:(CLLocationCoordinate2D)arg2 radius:(double)arg3 ;
-(id)_assetFromAssets:(id)arg1 closestToLocationCoordinate:(CLLocationCoordinate2D)arg2 radius:(double)arg3 ;
-(id)representativeCuratedAssetsFromMomentNode:(id)arg1 ;
-(void)setExistingQuestionsByEntityIdentifier:(NSDictionary *)arg1 ;
-(BOOL)ignoreExistingQuestions;
-(void)setIgnoreExistingQuestions:(BOOL)arg1 ;
@end

