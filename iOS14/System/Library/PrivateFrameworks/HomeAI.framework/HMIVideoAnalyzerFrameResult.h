/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMIVideoFrame, NSSet, NSString;

@interface HMIVideoAnalyzerFrameResult : HMFObject <HMFLogging, NSSecureCoding> {

	HMIVideoFrame* _frame;
	NSSet* _events;

}

@property (readonly) HMIVideoFrame * frame;                         //@synthesize frame=_frame - In the implementation block
@property (readonly) NSSet * events;                                //@synthesize events=_events - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(HMIVideoFrame *)frame;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)events;
-(id)maxConfidenceEventForEventClass:(Class)arg1 ;
-(id)initWithFrame:(id)arg1 events:(id)arg2 ;
-(id)maxConfidenceEvents;
@end

