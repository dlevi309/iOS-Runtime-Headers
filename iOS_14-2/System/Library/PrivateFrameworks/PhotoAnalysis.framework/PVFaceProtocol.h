/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)localIdentifier;
-(double)centerY;
-(double)size;
-(double)centerX;
-(NSString *)personLocalIdentifier;
-(unsigned short)ageType;
-(long long)clusterSequenceNumber;
-(long long)qualityMeasure;
-(void)setQualityMeasure:(long long)arg1;
-(NSData *)faceprintData;

@end

