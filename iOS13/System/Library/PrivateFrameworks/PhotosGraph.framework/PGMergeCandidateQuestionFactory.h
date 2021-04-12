/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGQuestionFactory.h>

@class PGManager, PHFetchResult, NSString;

@interface PGMergeCandidateQuestionFactory : NSObject <PGQuestionFactory> {

	PGManager* _manager;
	PHFetchResult* _persons;

}

@property (nonatomic,retain) PHFetchResult * persons;                    //@synthesize persons=_persons - In the implementation block
@property (nonatomic,retain) PGManager * manager;                        //@synthesize manager=_manager - In the implementation block
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
-(PHFetchResult *)persons;
-(void)setPersons:(PHFetchResult *)arg1 ;
-(long long)questionOptions;
-(id)generateQuestionsWithLimit:(unsigned long long)arg1 progressBlock:(/*^block*/id)arg2 ;
@end

