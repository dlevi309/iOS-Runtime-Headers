/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/SoftwareUpdateCoreSupport
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface SUCoreMAIdentifier : NSObject <NSSecureCoding> {

	NSString* _productVersion;
	NSString* _productBuildVersion;
	NSString* _releaseType;
	NSData* _measurement;
	NSString* _measurementAlgorithm;

}

@property (nonatomic,retain) NSString * productVersion;                    //@synthesize productVersion=_productVersion - In the implementation block
@property (nonatomic,retain) NSString * productBuildVersion;               //@synthesize productBuildVersion=_productBuildVersion - In the implementation block
@property (nonatomic,retain) NSString * releaseType;                       //@synthesize releaseType=_releaseType - In the implementation block
@property (nonatomic,retain) NSData * measurement;                         //@synthesize measurement=_measurement - In the implementation block
@property (nonatomic,retain) NSString * measurementAlgorithm;              //@synthesize measurementAlgorithm=_measurementAlgorithm - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)measurement;
-(void)setMeasurement:(NSData *)arg1 ;
-(NSString *)productVersion;
-(NSString *)productBuildVersion;
-(void)setProductVersion:(NSString *)arg1 ;
-(void)setProductBuildVersion:(NSString *)arg1 ;
-(NSString *)releaseType;
-(void)setReleaseType:(NSString *)arg1 ;
-(NSString *)measurementAlgorithm;
-(id)initWithProductVersion:(id)arg1 productBuildVersion:(id)arg2 releaseType:(id)arg3 measurement:(id)arg4 measurementAlgorithm:(id)arg5 ;
-(void)setMeasurementAlgorithm:(NSString *)arg1 ;
@end

