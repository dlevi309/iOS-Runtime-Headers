/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMIVideoFragment, NSArray, HMIVideoAnalyzerResultOutcome, HMIVideoAnalyzerDynamicConfiguration, NSSet, NSString;

@interface HMIVideoAnalyzerFragmentResult : HMFObject <HMFLogging, NSSecureCoding> {

	HMIVideoFragment* _fragment;
	NSArray* _thumbnails;
	HMIVideoAnalyzerResultOutcome* _outcome;
	NSArray* _frameResults;
	HMIVideoAnalyzerDynamicConfiguration* _configuration;
	NSSet* _events;

}

@property (readonly) HMIVideoFragment * fragment;                                       //@synthesize fragment=_fragment - In the implementation block
@property (readonly) NSArray * thumbnails;                                              //@synthesize thumbnails=_thumbnails - In the implementation block
@property (readonly) HMIVideoAnalyzerResultOutcome * outcome;                           //@synthesize outcome=_outcome - In the implementation block
@property (readonly) NSArray * frameResults;                                            //@synthesize frameResults=_frameResults - In the implementation block
@property (readonly) HMIVideoAnalyzerDynamicConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (readonly) NSSet * events;                                                    //@synthesize events=_events - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
-(HMIVideoAnalyzerResultOutcome *)outcome;
-(HMIVideoFragment *)fragment;
-(NSArray *)thumbnails;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(NSArray *)frameResults;
-(HMIVideoAnalyzerDynamicConfiguration *)configuration;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)events;
-(id)maxConfidenceEventForEventClass:(Class)arg1 ;
-(id)maxConfidenceEvents;
-(id)initWithFragment:(id)arg1 events:(id)arg2 frameResults:(id)arg3 thumbnails:(id)arg4 configuration:(id)arg5 outcome:(id)arg6 ;
@end

