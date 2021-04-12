/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/

@class NSString, NSData;


@protocol PVFaceProtocol <NSObject>
@property (nonatomic,readonly) NSString * localIdentifier; 
@property (nonatomic,readonly) NSString * personLocalIdentifier; 
@property (nonatomic,readonly) double size; 
@property (nonatomic,readonly) double centerX; 
@property (nonatomic,readonly) double centerY; 
@property (nonatomic,readonly) long long clusterSequenceNumber; 
@property (nonatomic,readonly) NSData * faceprintData; 
@property (assign,nonatomic) long long qualityMeasure; 
@property (nonatomic,readonly) unsigned short ageType; 
@required
-(double)size;
-(double)centerX;
-(double)centerY;
-(NSString *)localIdentifier;
-(NSString *)personLocalIdentifier;
-(long long)qualityMeasure;
-(long long)clusterSequenceNumber;
-(unsigned short)ageType;
-(NSData *)faceprintData;
-(void)setQualityMeasure:(long long)arg1;

@end

