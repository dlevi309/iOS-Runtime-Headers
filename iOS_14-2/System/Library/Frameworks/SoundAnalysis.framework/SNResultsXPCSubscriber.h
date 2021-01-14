/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <libobjc.A.dylib/SNResultsObserving.h>
#import <libobjc.A.dylib/SNResultsObservingXPCProtocol.h>

@protocol SNResultsObserving;
@class NSString;

@interface SNResultsXPCSubscriber : NSObject <SNResultsObserving, SNResultsObservingXPCProtocol> {

	id<SNResultsObserving> _receiver;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)request:(id)arg1 didProduceResult:(id)arg2 ;
-(void)requestDidComplete:(id)arg1 ;
-(id)initWithReceiver:(id)arg1 ;
-(void)xpcRequest:(id)arg1 didProduceResult:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)xpcRequest:(id)arg1 didFailWithError:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)xpcRequestDidComplete:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

