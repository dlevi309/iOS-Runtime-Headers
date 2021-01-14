/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)productVersion;
-(NSString *)productBuildVersion;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)measurement;
-(void)setMeasurement:(NSData *)arg1 ;
-(NSString *)releaseType;
-(void)setProductVersion:(NSString *)arg1 ;
-(id)description;
-(void)setProductBuildVersion:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithProductVersion:(id)arg1 productBuildVersion:(id)arg2 releaseType:(id)arg3 measurement:(id)arg4 measurementAlgorithm:(id)arg5 ;
-(NSString *)measurementAlgorithm;
-(void)setReleaseType:(NSString *)arg1 ;
-(void)setMeasurementAlgorithm:(NSString *)arg1 ;
@end

