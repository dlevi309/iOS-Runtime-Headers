/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface PGSharingFeatures : NSObject <NSSecureCoding> {

	NSArray* _classes;
	NSArray* _momentFeatureVectors;
	NSArray* _assetFeatureVectors;

}

@property (nonatomic,readonly) NSArray * classes;                           //@synthesize classes=_classes - In the implementation block
@property (nonatomic,readonly) NSArray * momentFeatureVectors;              //@synthesize momentFeatureVectors=_momentFeatureVectors - In the implementation block
@property (nonatomic,readonly) NSArray * assetFeatureVectors;               //@synthesize assetFeatureVectors=_assetFeatureVectors - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)classes;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithClasses:(id)arg1 momentFeatureVectors:(id)arg2 assetFeatureVectors:(id)arg3 ;
-(NSArray *)momentFeatureVectors;
-(NSArray *)assetFeatureVectors;
@end

