/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATOperation.h>

@protocol CRKIDSLocalPrimitives, CRKIDSListener;
@class NSDictionary, NSString, NSDate;

@interface CRKIDSSendMessageOperation : CATOperation {

	id<CRKIDSLocalPrimitives> _IDSLocalPrimitives;
	NSDictionary* _message;
	NSString* _destinationAddress;
	id<CRKIDSListener> _messageSendListener;
	NSString* _messageSendIdentifier;
	NSDate* _initialSendDate;

}

@property (nonatomic,readonly) id<CRKIDSLocalPrimitives> IDSLocalPrimitives;              //@synthesize IDSLocalPrimitives=_IDSLocalPrimitives - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * message;                               //@synthesize message=_message - In the implementation block
@property (nonatomic,copy,readonly) NSString * destinationAddress;                        //@synthesize destinationAddress=_destinationAddress - In the implementation block
@property (nonatomic,retain) id<CRKIDSListener> messageSendListener;                      //@synthesize messageSendListener=_messageSendListener - In the implementation block
@property (nonatomic,copy) NSString * messageSendIdentifier;                              //@synthesize messageSendIdentifier=_messageSendIdentifier - In the implementation block
@property (nonatomic,retain) NSDate * initialSendDate;                                    //@synthesize initialSendDate=_initialSendDate - In the implementation block
-(NSDictionary *)message;
-(BOOL)isAsynchronous;
-(void)main;
-(void)cancel;
-(NSString *)destinationAddress;
-(id<CRKIDSListener>)messageSendListener;
-(id<CRKIDSLocalPrimitives>)IDSLocalPrimitives;
-(void)didSendMessageWithIdentifier:(id)arg1 sendSuccess:(BOOL)arg2 error:(id)arg3 ;
-(void)setMessageSendListener:(id<CRKIDSListener>)arg1 ;
-(void)setMessageSendIdentifier:(NSString *)arg1 ;
-(void)setInitialSendDate:(NSDate *)arg1 ;
-(NSString *)messageSendIdentifier;
-(NSDate *)initialSendDate;
-(id)initWithIDSLocalPrimitives:(id)arg1 message:(id)arg2 destinationAddress:(id)arg3 ;
@end

