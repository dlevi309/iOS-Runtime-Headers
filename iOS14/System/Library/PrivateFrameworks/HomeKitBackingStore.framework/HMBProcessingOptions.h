/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	BOOL _disallowsModelCreation;
	NSString* _label;
	NSDictionary* _messagePayload;
	NSString* _messageName;
	/*^block*/id _messageResponseHandler;
	NSUUID* _messageTransactionIdentifier;
	long long _qualityOfService;
	HMFActivity* _activity;
	unsigned long long _transactionItemsBatchLimit;

}

@property (assign) BOOL disallowsModelCreation;                                          //@synthesize disallowsModelCreation=_disallowsModelCreation - In the implementation block
@property (nonatomic,readonly) NSString * label;                                         //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSDictionary * messagePayload;                              //@synthesize messagePayload=_messagePayload - In the implementation block
@property (nonatomic,retain) NSString * messageName;                                     //@synthesize messageName=_messageName - In the implementation block
@property (nonatomic,copy) id messageResponseHandler;                                    //@synthesize messageResponseHandler=_messageResponseHandler - In the implementation block
@property (nonatomic,retain) NSUUID * messageTransactionIdentifier;                      //@synthesize messageTransactionIdentifier=_messageTransactionIdentifier - In the implementation block
@property (assign,nonatomic) BOOL shouldPerformDelegateCallbacks;                        //@synthesize shouldPerformDelegateCallbacks=_shouldPerformDelegateCallbacks - In the implementation block
@property (assign,nonatomic) BOOL shouldEnqueueMirrorOutput;                             //@synthesize shouldEnqueueMirrorOutput=_shouldEnqueueMirrorOutput - In the implementation block
@property (assign,nonatomic) BOOL shouldRollBackIfMirrorOutputFails;                     //@synthesize shouldRollBackIfMirrorOutputFails=_shouldRollBackIfMirrorOutputFails - In the implementation block
@property (assign,nonatomic) BOOL disallowsCellularAccessForMirrorOutput;                //@synthesize disallowsCellularAccessForMirrorOutput=_disallowsCellularAccessForMirrorOutput - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                                 //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,retain) HMFActivity * activity;                                     //@synthesize activity=_activity - In the implementation block
@property (assign,nonatomic) unsigned long long transactionItemsBatchLimit;              //@synthesize transactionItemsBatchLimit=_transactionItemsBatchLimit - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)optionsWithLabel:(id)arg1 ;
+(id)optionsWithMessage:(id)arg1 ;
-(void)setQualityOfService:(long long)arg1 ;
-(void)setMessagePayload:(NSDictionary *)arg1 ;
-(id)initWithLabel:(id)arg1 ;
-(HMFActivity *)activity;
-(NSString *)messageName;
-(void)setMessageName:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)messagePayload;
-(void)setActivity:(HMFActivity *)arg1 ;
-(id)attributeDescriptions;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)qualityOfService;
-(NSString *)label;
-(BOOL)isEqual:(id)arg1 ;
-(void)setMessageTransactionIdentifier:(NSUUID *)arg1 ;
-(void)setMessageResponseHandler:(id)arg1 ;
-(NSUUID *)messageTransactionIdentifier;
-(BOOL)shouldPerformDelegateCallbacks;
-(BOOL)shouldEnqueueMirrorOutput;
-(BOOL)shouldRollBackIfMirrorOutputFails;
-(BOOL)disallowsCellularAccessForMirrorOutput;
-(BOOL)disallowsModelCreation;
-(void)setShouldEnqueueMirrorOutput:(BOOL)arg1 ;
-(void)setShouldPerformDelegateCallbacks:(BOOL)arg1 ;
-(void)setShouldRollBackIfMirrorOutputFails:(BOOL)arg1 ;
-(void)setDisallowsCellularAccessForMirrorOutput:(BOOL)arg1 ;
-(void)setDisallowsModelCreation:(BOOL)arg1 ;
-(id)messageResponseHandler;
-(unsigned long long)transactionItemsBatchLimit;
-(void)setTransactionItemsBatchLimit:(unsigned long long)arg1 ;
@end

