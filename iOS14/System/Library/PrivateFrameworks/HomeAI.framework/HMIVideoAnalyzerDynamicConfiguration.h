/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface HMIVideoAnalyzerDynamicConfiguration : HMFObject <HMFLogging, NSSecureCoding> {

	BOOL _recognizeFaces;
	BOOL _detectPackages;
	long long _eventTriggers;
	NSArray* _activityZones;

}

@property (assign) BOOL detectPackages;                             //@synthesize detectPackages=_detectPackages - In the implementation block
@property (assign) BOOL recognizeFaces;                             //@synthesize recognizeFaces=_recognizeFaces - In the implementation block
@property (assign) long long eventTriggers;                         //@synthesize eventTriggers=_eventTriggers - In the implementation block
@property (retain) NSArray * activityZones;                         //@synthesize activityZones=_activityZones - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)attributeDescriptions;
-(NSArray *)activityZones;
-(id)initWithCoder:(id)arg1 ;
-(void)setActivityZones:(NSArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)eventTriggers;
-(void)setEventTriggers:(long long)arg1 ;
-(BOOL)recognizeFaces;
-(void)setRecognizeFaces:(BOOL)arg1 ;
-(BOOL)detectPackages;
-(void)setDetectPackages:(BOOL)arg1 ;
@end

