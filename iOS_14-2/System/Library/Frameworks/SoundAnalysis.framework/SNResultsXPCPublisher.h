/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <libobjc.A.dylib/SNResultsObserving.h>

@protocol SNResultsObservingXPCProtocolNSXPCProxyCreating;
@class NSString;

@interface SNResultsXPCPublisher : NSObject <SNResultsObserving> {

	id<SNResultsObservingXPCProtocol><NSXPCProxyCreating> _subscriber;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)request:(id)arg1 didProduceResult:(id)arg2 ;
-(void)requestDidComplete:(id)arg1 ;
-(id)initWithSubscriber:(id)arg1 ;
@end

