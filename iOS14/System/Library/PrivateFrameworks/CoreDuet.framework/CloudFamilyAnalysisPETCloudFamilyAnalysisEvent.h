/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CloudFamilyAnalysisPETContactEvents;

@interface CloudFamilyAnalysisPETCloudFamilyAnalysisEvent : PBCodable <NSCopying> {

	int _batch;
	NSString* _collectionId;
	CloudFamilyAnalysisPETContactEvents* _contactEvents;
	NSString* _sessionId;

}

@property (nonatomic,retain) NSString * collectionId;                                          //@synthesize collectionId=_collectionId - In the implementation block
@property (nonatomic,retain) NSString * sessionId;                                             //@synthesize sessionId=_sessionId - In the implementation block
@property (assign,nonatomic) int batch;                                                        //@synthesize batch=_batch - In the implementation block
@property (nonatomic,retain) CloudFamilyAnalysisPETContactEvents * contactEvents;              //@synthesize contactEvents=_contactEvents - In the implementation block
-(NSString *)sessionId;
-(void)setSessionId:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(int)batch;
-(void)mergeFrom:(id)arg1 ;
-(void)setCollectionId:(NSString *)arg1 ;
-(void)setContactEvents:(CloudFamilyAnalysisPETContactEvents *)arg1 ;
-(NSString *)collectionId;
-(CloudFamilyAnalysisPETContactEvents *)contactEvents;
-(id)description;
-(void)setBatch:(int)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

