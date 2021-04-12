/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <libobjc.A.dylib/SNAnalyzerCreating.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SNRequest.h>

@class NSString;

@interface SNCreateFeaturePrintRequest : NSObject <SNAnalyzerCreating, NSCopying, NSSecureCoding, SNRequest> {

	float _overlapFactor;
	long long _featurePrintType;

}

@property (assign,nonatomic) long long featurePrintType;              //@synthesize featurePrintType=_featurePrintType - In the implementation block
@property (assign,nonatomic) float overlapFactor;                     //@synthesize overlapFactor=_overlapFactor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)createAnalyzerWithError:(id*)arg1 ;
-(BOOL)isEqualToCreateFeaturePrintRequest:(id)arg1 ;
-(long long)featurePrintType;
-(void)setFeaturePrintType:(long long)arg1 ;
-(float)overlapFactor;
-(void)setOverlapFactor:(float)arg1 ;
@end

