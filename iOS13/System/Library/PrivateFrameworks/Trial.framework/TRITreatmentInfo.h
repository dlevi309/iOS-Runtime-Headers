/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
*/


@class NSString;

@interface TRITreatmentInfo : NSObject {

	unsigned _namespaceId;
	NSString* _treatmentId;
	NSString* _experimentId;

}

@property (assign) unsigned namespaceId;                           //@synthesize namespaceId=_namespaceId - In the implementation block
@property (nonatomic,retain) NSString * treatmentId;               //@synthesize treatmentId=_treatmentId - In the implementation block
@property (nonatomic,retain) NSString * experimentId;              //@synthesize experimentId=_experimentId - In the implementation block
+(id)_treatmentBasePath;
+(id)baseUrlForTreatment:(id)arg1 namespaceId:(unsigned)arg2 ;
+(id)loadInfoForTreatment:(id)arg1 namespaceId:(unsigned)arg2 ;
-(BOOL)load;
-(id)infoDictionary;
-(id)url;
-(BOOL)save;
-(NSString *)experimentId;
-(void)setExperimentId:(NSString *)arg1 ;
-(void)setTreatmentId:(NSString *)arg1 ;
-(NSString *)treatmentId;
-(unsigned)namespaceId;
-(void)setNamespaceId:(unsigned)arg1 ;
-(id)treatmentDirectory;
-(id)urlWithDir:(id)arg1 ;
-(BOOL)loadFromUrl:(id)arg1 ;
-(BOOL)saveToUrl:(id)arg1 ;
-(BOOL)saveToDir:(id)arg1 ;
@end

