/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMIConfidence, NSDictionary, NSString;

@interface HMIVideoAnalyzerEvent : HMFObject <HMFLogging, NSSecureCoding> {

	BOOL _hasMotionVectors;
	HMIConfidence* _confidence;
	NSDictionary* _userInfo;
	CGRect _boundingBox;

}

@property (readonly) HMIConfidence * confidence;                    //@synthesize confidence=_confidence - In the implementation block
@property (readonly) NSDictionary * userInfo;                       //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) BOOL hasMotionVectors;                         //@synthesize hasMotionVectors=_hasMotionVectors - In the implementation block
@property (readonly) long long confidenceLevel; 
@property (readonly) CGRect boundingBox;                            //@synthesize boundingBox=_boundingBox - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
+(id)eventClasses;
+(id)classShortNameStringMap;
+(id)eventsWithContentsOfFile:(id)arg1 ;
-(HMIConfidence *)confidence;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)shortDescription;
-(NSString *)description;
-(CGRect)boundingBox;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)confidenceLevel;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithConfidence:(id)arg1 boundingBox:(CGRect)arg2 hasMotionVectors:(BOOL)arg3 userInfo:(id)arg4 ;
-(id)initWithConfidence:(id)arg1 boundingBox:(CGRect)arg2 ;
-(BOOL)hasMotionVectors;
-(id)initWithConfidence:(id)arg1 boundingBox:(CGRect)arg2 hasMotionVectors:(BOOL)arg3 ;
@end

