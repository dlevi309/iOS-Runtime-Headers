/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

@class NSString, NSDictionary;


@protocol PGQuestion <NSObject>
@property (nonatomic,copy,readonly) NSString * entityIdentifier; 
@property (nonatomic,readonly) unsigned short type; 
@property (nonatomic,readonly) unsigned short state; 
@property (nonatomic,readonly) unsigned short entityType; 
@property (nonatomic,readonly) unsigned short displayType; 
@property (nonatomic,readonly) double localFactoryScore; 
@property (assign,nonatomic) double score; 
@property (nonatomic,copy,readonly) NSDictionary * additionalInfo; 
@required
-(unsigned short)entityType;
-(void)remove;
-(double)score;
-(unsigned short)displayType;
-(void)setScore:(double)arg1;
-(unsigned short)type;
-(NSDictionary *)additionalInfo;
-(unsigned short)state;
-(NSString *)entityIdentifier;
-(double)localFactoryScore;
-(void)persistWithCreationDate:(id)arg1;
-(BOOL)isEquivalentToPersistedQuestion:(id)arg1;

@end

