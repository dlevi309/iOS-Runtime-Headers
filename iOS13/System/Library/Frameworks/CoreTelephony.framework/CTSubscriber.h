/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <CoreTelephony/CoreTelephonyClientSubscriberDelegateInternal.h>

@protocol CTSubscriberDelegate;
@class CoreTelephonyClient, CTServiceDescriptor, NSData, NSString;

@interface CTSubscriber : NSObject <CoreTelephonyClientSubscriberDelegateInternal> {

	queue* _queue;
	CoreTelephonyClient* _client;
	id<CTSubscriberDelegate> _delegate;
	CTServiceDescriptor* _descriptor;

}

@property (nonatomic,retain) CTServiceDescriptor * descriptor;                      //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,retain,readonly) NSData * carrierToken; 
@property (nonatomic,readonly) NSString * identifier; 
@property (assign,nonatomic,__weak) id<CTSubscriberDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<CTSubscriberDelegate>)delegate;
-(void)setDelegate:(id<CTSubscriberDelegate>)arg1 ;
-(NSString *)identifier;
-(CTServiceDescriptor *)descriptor;
-(void)setDescriptor:(CTServiceDescriptor *)arg1 ;
-(id)initWithDescriptor:(id)arg1 ;
-(void)authTokenChanged:(id)arg1 ;
-(void)authenticate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithDescriptor:(id)arg1 client:(id)arg2 ;
-(NSData *)carrierToken;
-(BOOL)refreshCarrierToken;
-(void)authenticateWithInfo:(id)arg1 handleResult:(/*^block*/id)arg2 ;
-(id)typeAllocationCode;
@end

