/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGQuestion.h>

@class NSString, NSDictionary, NSDate;

@interface PGSurveyResult : NSObject <PGQuestion> {

	unsigned short type;
	unsigned short state;
	unsigned short entityType;
	unsigned short displayType;
	NSString* entityIdentifier;
	NSString* momentIdentifier;
	NSDictionary* additionalInfo;
	double localFactoryScore;
	double score;
	NSDate* creationDate;

}

@property (nonatomic,copy) NSString * entityIdentifier; 
@property (nonatomic,copy) NSString * momentIdentifier; 
@property (assign,nonatomic) unsigned short type; 
@property (assign,nonatomic) unsigned short state; 
@property (assign,nonatomic) unsigned short entityType; 
@property (assign,nonatomic) unsigned short displayType; 
@property (nonatomic,copy) NSDictionary * additionalInfo; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (nonatomic,readonly) double localFactoryScore; 
@property (assign,nonatomic) double score; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned short)entityType;
-(void)remove;
-(double)score;
-(unsigned short)displayType;
-(void)setAdditionalInfo:(NSDictionary *)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setScore:(double)arg1 ;
-(void)setDisplayType:(unsigned short)arg1 ;
-(void)setType:(unsigned short)arg1 ;
-(NSDate *)creationDate;
-(void)setEntityIdentifier:(NSString *)arg1 ;
-(unsigned short)type;
-(void)setState:(unsigned short)arg1 ;
-(NSDictionary *)additionalInfo;
-(unsigned long long)hash;
-(unsigned short)state;
-(void)setEntityType:(unsigned short)arg1 ;
-(NSString *)entityIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)momentIdentifier;
-(void)setMomentIdentifier:(NSString *)arg1 ;
-(double)localFactoryScore;
-(void)persistWithCreationDate:(id)arg1 ;
-(BOOL)isEquivalentToPersistedQuestion:(id)arg1 ;
-(BOOL)isEquivalentToSurveyResult:(id)arg1 ;
@end

