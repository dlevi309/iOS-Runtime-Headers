/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDDataStreamProtocol.h>

@class NSString, NSNumber;

@interface HMDDataStreamControlProtocol : NSObject <HMFLogging, HMDDataStreamProtocol> {

	BOOL _helloMessageResponseReceived;
	NSString* _logIdentifier;
	NSNumber* _pendingHelloMessageIdentifier;

}

@property (copy,readonly) NSString * logIdentifier;                                 //@synthesize logIdentifier=_logIdentifier - In the implementation block
@property (nonatomic,retain) NSNumber * pendingHelloMessageIdentifier;              //@synthesize pendingHelloMessageIdentifier=_pendingHelloMessageIdentifier - In the implementation block
@property (assign,nonatomic) BOOL helloMessageResponseReceived;                     //@synthesize helloMessageResponseReceived=_helloMessageResponseReceived - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isActive,nonatomic,readonly) BOOL active; 
+(id)logCategory;
-(BOOL)isActive;
-(NSString *)logIdentifier;
-(id)initWithLogIdentifier:(id)arg1 ;
-(BOOL)helloMessageResponseReceived;
-(void)dataStream:(id)arg1 didFailWithError:(id)arg2 ;
-(void)dataStream:(id)arg1 didReceiveResponse:(id)arg2 header:(id)arg3 payload:(id)arg4 ;
-(void)dataStream:(id)arg1 didReceiveEvent:(id)arg2 header:(id)arg3 payload:(id)arg4 ;
-(void)dataStream:(id)arg1 didReceiveRequest:(id)arg2 header:(id)arg3 payload:(id)arg4 ;
-(void)dataStreamDidClose:(id)arg1 ;
-(void)dataStreamDidOpen:(id)arg1 ;
-(void)setPendingHelloMessageIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)pendingHelloMessageIdentifier;
-(BOOL)isExpectedHelloControlMessage:(id)arg1 header:(id)arg2 ;
-(void)setHelloMessageResponseReceived:(BOOL)arg1 ;
@end

