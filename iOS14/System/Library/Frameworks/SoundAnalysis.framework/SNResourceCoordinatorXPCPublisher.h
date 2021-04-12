/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <libobjc.A.dylib/SNResourceCoordinatorProtocol.h>

@protocol SNResourceCoordinatorXPCProtocolNSXPCProxyCreating;
@class NSString;

@interface SNResourceCoordinatorXPCPublisher : NSObject <SNResourceCoordinatorProtocol> {

	id<SNResourceCoordinatorXPCProtocol><NSXPCProxyCreating> _subscriber;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithSubscriber:(id)arg1 ;
-(id)createSystemAudioAnalyzer;
@end

