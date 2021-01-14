/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)authenticateWithInfo:(id)arg1 handleResult:(/*^block*/id)arg2 ;
-(void)authTokenChanged:(id)arg1 ;
-(NSData *)carrierToken;
-(id)initWithDescriptor:(id)arg1 client:(id)arg2 ;
-(id)init;
-(void)authenticate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<CTSubscriberDelegate>)delegate;
-(id)initWithDescriptor:(id)arg1 ;
-(id)typeAllocationCode;
-(BOOL)refreshCarrierToken;
-(CTServiceDescriptor *)descriptor;
-(void)setDelegate:(id<CTSubscriberDelegate>)arg1 ;
-(void)setDescriptor:(CTServiceDescriptor *)arg1 ;
-(NSString *)identifier;
@end

