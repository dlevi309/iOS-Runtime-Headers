/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,readonly) NSString * localIdentifier; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) unsigned long long estimatedAssetCount; 
@property (nonatomic,readonly) CLLocationCoordinate2D approximateCoordinate; 
@property (nonatomic,readonly) BOOL isCoarse; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
@property (readonly) NSString * localIdentifier; 
+(id)dateForTimeInterval:(double)arg1 ;
+(double)timeIntervalForDate:(id)arg1 ;
-(unsigned long long)faceCount;
-(NSString *)localIdentifier;
-(NSDate *)endDate;
-(BOOL)hidden;
-(double)centerY;
-(BOOL)isVerified;
-(BOOL)isDirty;
-(id)dateCreated;
-(NSDate *)startDate;
-(double)size;
-(double)centerX;
-(NSString *)filename;
-(NSString *)personLocalIdentifier;
-(CLLocationCoordinate2D)locationCoordinate;
-(void)setIsVerified:(BOOL)arg1 ;
-(id<PVFaceProtocol>)keyFace;
-(unsigned short)ageType;
-(unsigned long long)faceCountInFaceGroup;
-(NSDate *)creationDate;
-(unsigned long long)pixelHeight;
-(NSString *)anonymizedName;
-(void)pv_addMergeCandidatePersons:(id)arg1 ;
-(id)personLocalIdentifiers;
-(long long)clusterSequenceNumber;
-(long long)qualityMeasure;
-(void)setQualityMeasure:(long long)arg1 ;
-(long long)manualOrder;
-(void)setManualOrder:(long long)arg1 ;
-(long long)verifiedType;
-(BOOL)isCoarse;
-(unsigned long long)type;
-(NSData *)faceprintData;
-(NSString *)originalFilename;
-(unsigned long long)estimatedAssetCount;
-(CLLocationCoordinate2D)approximateCoordinate;
-(NSData *)distanceIdentity;
-(BOOL)favorite;
-(NSString *)cloudIdentifier;
-(unsigned long long)pixelWidth;
-(void)setKeyFace:(id<PVFaceProtocol>)arg1 ;
@end

