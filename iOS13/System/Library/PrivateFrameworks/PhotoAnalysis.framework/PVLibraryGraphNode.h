/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/

#import <PhotoAnalysis/PhotoAnalysis-Structs.h>
#import <KnowledgeGraphKit/MANode.h>
#import <libobjc.A.dylib/PVMomentProtocol.h>
#import <libobjc.A.dylib/PVFaceProtocol.h>
#import <libobjc.A.dylib/PVPersonProtocol.h>
#import <libobjc.A.dylib/PVAssetProtocol.h>

@class NSString, NSDate, NSData;

@interface PVLibraryGraphNode : MANode <PVMomentProtocol, PVFaceProtocol, PVPersonProtocol, PVAssetProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * localIdentifier; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) unsigned long long estimatedAssetCount; 
@property (nonatomic,readonly) CLLocationCoordinate2D approximateCoordinate; 
@property (nonatomic,readonly) NSString * personLocalIdentifier; 
@property (nonatomic,readonly) double size; 
@property (nonatomic,readonly) double centerX; 
@property (nonatomic,readonly) double centerY; 
@property (nonatomic,readonly) long long clusterSequenceNumber; 
@property (nonatomic,readonly) NSData * faceprintData; 
@property (assign,nonatomic) long long qualityMeasure; 
@property (nonatomic,readonly) unsigned short ageType; 
@property (nonatomic,readonly) unsigned long long faceCount; 
@property (nonatomic,readonly) BOOL favorite; 
@property (nonatomic,readonly) BOOL hidden; 
@property (nonatomic,readonly) NSString * anonymizedName; 
@property (nonatomic,readonly) long long verifiedType; 
@property (assign,nonatomic) BOOL isVerified; 
@property (assign,nonatomic) long long manualOrder; 
@property (nonatomic,retain) id<PVFaceProtocol> keyFace; 
@property (nonatomic,readonly) NSString * cloudIdentifier; 
@property (nonatomic,readonly) NSString * filename; 
@property (nonatomic,readonly) NSString * originalFilename; 
@property (nonatomic,readonly) unsigned long long pixelWidth; 
@property (nonatomic,readonly) unsigned long long pixelHeight; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) CLLocationCoordinate2D locationCoordinate; 
@property (nonatomic,readonly) NSData * distanceIdentity; 
@property (nonatomic,readonly) NSDate * clsDistanceIdentity; 
@property (readonly) NSString * localIdentifier; 
+(double)timeIntervalForDate:(id)arg1 ;
+(id)dateForTimeInterval:(double)arg1 ;
-(unsigned long long)type;
-(double)size;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSString *)filename;
-(NSDate *)creationDate;
-(double)centerX;
-(double)centerY;
-(NSString *)cloudIdentifier;
-(BOOL)isDirty;
-(NSString *)localIdentifier;
-(BOOL)hidden;
-(BOOL)isVerified;
-(void)setIsVerified:(BOOL)arg1 ;
-(CLLocationCoordinate2D)locationCoordinate;
-(id)dateCreated;
-(NSString *)originalFilename;
-(unsigned long long)faceCount;
-(unsigned long long)pixelWidth;
-(unsigned long long)pixelHeight;
-(void)setManualOrder:(long long)arg1 ;
-(BOOL)favorite;
-(NSString *)personLocalIdentifier;
-(id<PVFaceProtocol>)keyFace;
-(long long)verifiedType;
-(long long)manualOrder;
-(void)setKeyFace:(id<PVFaceProtocol>)arg1 ;
-(long long)qualityMeasure;
-(long long)clusterSequenceNumber;
-(unsigned short)ageType;
-(NSData *)faceprintData;
-(unsigned long long)estimatedAssetCount;
-(NSData *)distanceIdentity;
-(void)setQualityMeasure:(long long)arg1 ;
-(unsigned long long)faceCountInFaceGroup;
-(CLLocationCoordinate2D)approximateCoordinate;
-(id)personLocalIdentifiers;
-(void)pv_addMergeCandidatePersons:(id)arg1 ;
-(NSString *)anonymizedName;
-(NSDate *)clsDistanceIdentity;
@end

