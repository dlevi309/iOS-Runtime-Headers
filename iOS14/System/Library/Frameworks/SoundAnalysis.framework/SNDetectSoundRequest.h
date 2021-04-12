/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <libobjc.A.dylib/SNAnalysisPassStrategyProviding.h>
#import <libobjc.A.dylib/SNAnalyzerCreating.h>
#import <libobjc.A.dylib/SNTwoPassRequest.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SNRequest.h>

@class MLModel, NSString, SNTwoPassConfiguration;

@interface SNDetectSoundRequest : NSObject <SNAnalysisPassStrategyProviding, SNAnalyzerCreating, SNTwoPassRequest, NSCopying, NSSecureCoding, SNRequest> {

	MLModel* _model;
	NSString* _soundIdentifier;
	long long _analysisPassStrategy;
	SNTwoPassConfiguration* _twoPassConfiguration;

}

@property (nonatomic,readonly) NSString * soundIdentifier;                       //@synthesize soundIdentifier=_soundIdentifier - In the implementation block
@property (nonatomic,readonly) long long analysisPassStrategy;                   //@synthesize analysisPassStrategy=_analysisPassStrategy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) SNTwoPassConfiguration * twoPassConfiguration;              //@synthesize twoPassConfiguration=_twoPassConfiguration - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)allValidSoundIdentifiers;
+(id)createTwoPassConfigurationWithSoundIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithSoundIdentifier:(id)arg1 ;
-(NSString *)soundIdentifier;
-(id)initWithVGGishBasedMLModel:(id)arg1 soundIdentifier:(id)arg2 ;
-(id)createAnalyzerWithError:(id*)arg1 ;
-(id)createSecondPassController;
-(SNTwoPassConfiguration *)twoPassConfiguration;
-(long long)analysisPassStrategy;
-(id)initWithSoundIdentifier:(id)arg1 shouldUseTwoPassDetection:(BOOL)arg2 ;
-(id)initWithSoundIdentifier:(id)arg1 analysisPassStrategy:(long long)arg2 ;
-(BOOL)isEqualToDetectSoundRequest:(id)arg1 ;
@end

