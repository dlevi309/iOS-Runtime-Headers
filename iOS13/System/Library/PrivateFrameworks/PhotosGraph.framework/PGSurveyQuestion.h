/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGQuestion.h>

@class NSString, NSDictionary;

@interface PGSurveyQuestion : NSObject <PGQuestion> {

	unsigned short state;
	NSDictionary* additionalInfo;
	NSString* entityIdentifier;
	double localFactoryScore;
	double score;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * entityIdentifier; 
@property (nonatomic,readonly) unsigned short type; 
@property (nonatomic,readonly) unsigned short state; 
@property (nonatomic,readonly) unsigned short entityType; 
@property (nonatomic,readonly) unsigned short displayType; 
@property (nonatomic,readonly) double localFactoryScore; 
@property (assign,nonatomic) double score; 
@property (nonatomic,readonly) NSDictionary * additionalInfo; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned short)type;
-(unsigned short)state;
-(void)remove;
-(double)score;
-(void)setScore:(double)arg1 ;
-(unsigned short)displayType;
-(NSDictionary *)additionalInfo;
-(NSString *)entityIdentifier;
-(unsigned short)entityType;
-(void)persistWithCreationDate:(id)arg1 ;
-(double)localFactoryScore;
-(BOOL)isEquivalentToPersistedQuestion:(id)arg1 ;
-(BOOL)isEquivalentToQuestion:(id)arg1 ;
@end

