/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMIFaceTracker, NSMutableDictionary, NSString;

@interface HMISessionEntityManager : HMFObject <HMFLogging> {

	HMIFaceTracker* _faceTracker;
	NSMutableDictionary* _sessionUUIDToPreviousFaceIndex;
	NSMutableDictionary* _sessionUUIDToPreviousFaceprints;
	NSMutableDictionary* _sessionEntities;

}

@property (readonly) NSMutableDictionary * sessionEntities;              //@synthesize sessionEntities=_sessionEntities - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)initWithFrameDimensions:(CGSize)arg1 ;
-(NSMutableDictionary *)sessionEntities;
-(void)handleMotionDetection:(id)arg1 sessionPTS:(SCD_Struct_HM3)arg2 ;
-(id)assignSessionEntitiesToPersonWithFaceEvents:(id)arg1 personWithoutFaceEvents:(id)arg2 personWithFilteredFaceEvents:(id)arg3 videoFrame:(id)arg4 ;
@end

