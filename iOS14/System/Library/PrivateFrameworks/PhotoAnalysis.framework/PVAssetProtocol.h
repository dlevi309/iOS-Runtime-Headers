/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/

@class NSString, NSDate, NSData;


@protocol PVAssetProtocol <NSObject>
@property (nonatomic,readonly) NSString * localIdentifier; 
@property (nonatomic,readonly) NSString * cloudIdentifier; 
@property (nonatomic,readonly) NSString * filename; 
@property (nonatomic,readonly) NSString * originalFilename; 
@property (nonatomic,readonly) unsigned long long pixelWidth; 
@property (nonatomic,readonly) unsigned long long pixelHeight; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) CLLocationCoordinate2D locationCoordinate; 
@property (nonatomic,readonly) NSData * distanceIdentity; 
@required
-(NSString *)localIdentifier;
-(NSString *)filename;
-(CLLocationCoordinate2D)locationCoordinate;
-(NSDate *)creationDate;
-(unsigned long long)pixelHeight;
-(NSString *)originalFilename;
-(NSData *)distanceIdentity;
-(NSString *)cloudIdentifier;
-(unsigned long long)pixelWidth;

@end

