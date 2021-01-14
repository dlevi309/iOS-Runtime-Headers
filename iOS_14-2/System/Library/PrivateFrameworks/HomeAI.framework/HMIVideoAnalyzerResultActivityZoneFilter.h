/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HMIVideoAnalyzerResultFilter.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSArray, NSString;

@interface HMIVideoAnalyzerResultActivityZoneFilter : HMIVideoAnalyzerResultFilter <HMFLogging> {

	NSArray* _activityZones;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)applyWithFrameResult:(id)arg1 ;
-(id)initWithActivityZones:(id)arg1 ;
@end

