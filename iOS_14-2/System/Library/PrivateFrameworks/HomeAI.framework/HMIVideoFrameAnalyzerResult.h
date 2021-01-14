/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMIVideoEvent.h>

@class HMIVideoFrame, NSSet, NSString;

@interface HMIVideoFrameAnalyzerResult : HMFObject <HMIVideoEvent> {

	HMIVideoFrame* _frame;
	NSSet* _events;

}

@property (readonly) HMIVideoFrame * frame;                         //@synthesize frame=_frame - In the implementation block
@property (readonly) NSSet * events;                                //@synthesize events=_events - In the implementation block
@property (readonly) SCD_Struct_HM3 time; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SCD_Struct_HM3)time;
-(HMIVideoFrame *)frame;
-(NSString *)debugDescription;
-(NSString *)description;
-(NSSet *)events;
-(id)initWithFrame:(id)arg1 events:(id)arg2 ;
@end

