/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSUUID, HMFActivity;

@interface HMBProcessingOptions : HMFObject <NSSecureCoding> {

	BOOL _shouldPerformDelegateCallbacks;
	BOOL _shouldEnqueueMirrorOutput;
	BOOL _shouldRollBackIfMirrorOutputFails;
	BOOL _disallowsCellularAccessForMirrorOutput;
	NSString* _label;
	NSDictionary* _messagePayload;
	NSString* _messageName;
	/*^block*/id _messageResponseHandler;
	NSUUID* _messageTransactionIdentifier;
	long long _qualityOfService;
	HMFActivity* _activity;

}

@property (nonatomic,readonly) NSString * label;                                       //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSDictionary * messagePayload;                            //@synthesize messagePayload=_messagePayload - In the implementation block
@property (nonatomic,retain) NSString * messageName;                                   //@synthesize messageName=_messageName - In the implementation block
@property (nonatomic,copy) id messageResponseHandler;                                  //@synthesize messageResponseHandler=_messageResponseHandler - In the implementation block
@property (nonatomic,retain) NSUUID * messageTransactionIdentifier;                    //@synthesize messageTransactionIdentifier=_messageTransactionIdentifier - In the implementation block
@property (assign,nonatomic) BOOL shouldPerformDelegateCallbacks;                      //@synthesize shouldPerformDelegateCallbacks=_shouldPerformDelegateCallbacks - In the implementation block
@property (assign,nonatomic) BOOL shouldEnqueueMirrorOutput;                           //@synthesize shouldEnqueueMirrorOutput=_shouldEnqueueMirrorOutput - In the implementation block
@property (assign,nonatomic) BOOL shouldRollBackIfMirrorOutputFails;                   //@synthesize shouldRollBackIfMirrorOutputFails=_shouldRollBackIfMirrorOutputFails - In the implementation block
@property (assign,nonatomic) BOOL disallowsCellularAccessForMirrorOutput;              //@synthesize disallowsCellularAccessForMirrorOutput=_disallowsCellularAccessForMirrorOutput - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                               //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,retain) HMFActivity * activity;                                   //@synthesize activity=_activity - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)optionsWithLabel:(id)arg1 ;
+(id)optionsWithMessage:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HMFActivity *)activity;
-(void)setActivity:(HMFActivity *)arg1 ;
-(long long)qualityOfService;
-(void)setQualityOfService:(long long)arg1 ;
-(NSString *)label;
-(id)initWithLabel:(id)arg1 ;
-(NSString *)messageName;
-(id)attributeDescriptions;
-(NSDictionary *)messagePayload;
-(void)setMessagePayload:(NSDictionary *)arg1 ;
-(id)transactionIdentifier;
-(void)setMessageName:(NSString *)arg1 ;
-(void)setMessageTransactionIdentifier:(NSUUID *)arg1 ;
-(void)setMessageResponseHandler:(id)arg1 ;
-(NSUUID *)messageTransactionIdentifier;
-(BOOL)shouldPerformDelegateCallbacks;
-(BOOL)shouldEnqueueMirrorOutput;
-(BOOL)shouldRollBackIfMirrorOutputFails;
-(BOOL)disallowsCellularAccessForMirrorOutput;
-(id)messageResponseHandler;
-(void)setShouldEnqueueMirrorOutput:(BOOL)arg1 ;
-(void)setShouldPerformDelegateCallbacks:(BOOL)arg1 ;
-(void)setShouldRollBackIfMirrorOutputFails:(BOOL)arg1 ;
-(void)setDisallowsCellularAccessForMirrorOutput:(BOOL)arg1 ;
-(void)callMessageResponseHandlerWithPayload:(id)arg1 error:(id)arg2 ;
@end

