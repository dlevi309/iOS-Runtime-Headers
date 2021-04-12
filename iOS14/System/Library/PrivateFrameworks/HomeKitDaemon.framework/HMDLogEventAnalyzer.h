/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDLogEventObserver.h>

@protocol HMDLogEventAnalyzerContext;
@class NSArray, NSString;

@interface HMDLogEventAnalyzer : HMFObject <HMFLogging, HMDLogEventObserver> {

	id<HMDLogEventAnalyzerContext> _context;
	NSArray* _supportedEventTypes;

}

@property (readonly) id<HMDLogEventAnalyzerContext> context;              //@synthesize context=_context - In the implementation block
@property (readonly) NSArray * supportedEventTypes;                       //@synthesize supportedEventTypes=_supportedEventTypes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id<HMDLogEventAnalyzerContext>)context;
-(id)initWithSupportedEventTypes:(id)arg1 context:(id)arg2 ;
-(void)processLogEvent:(id)arg1 ;
-(NSArray *)supportedEventTypes;
-(BOOL)isSupportedEvent:(id)arg1 ;
-(void)didReceiveEventFromDispatcher:(id)arg1 withLogContext:(id)arg2 ;
@end

