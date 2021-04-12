/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/


@class NSString;

@interface SNModelFeatureConnection : NSObject {

	NSString* _sourceFeatureName;
	NSString* _destinationFeatureName;

}

@property (readonly) NSString * sourceFeatureName;                   //@synthesize sourceFeatureName=_sourceFeatureName - In the implementation block
@property (readonly) NSString * destinationFeatureName;              //@synthesize destinationFeatureName=_destinationFeatureName - In the implementation block
-(NSString *)destinationFeatureName;
-(NSString *)sourceFeatureName;
-(id)initWithSourceFeatureName:(id)arg1 destinationFeatureName:(id)arg2 ;
@end

