/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/


@class NSString;

@interface SYMessageStatusRecord : NSObject {

	BOOL _deviceACKReceived;
	BOOL _applicationACKReceived;
	BOOL _responseReceived;
	NSString* _messageID;

}

@property (nonatomic,copy) NSString * messageID;                       //@synthesize messageID=_messageID - In the implementation block
@property (assign,nonatomic) BOOL deviceACKReceived;                   //@synthesize deviceACKReceived=_deviceACKReceived - In the implementation block
@property (assign,nonatomic) BOOL applicationACKReceived;              //@synthesize applicationACKReceived=_applicationACKReceived - In the implementation block
@property (assign,nonatomic) BOOL responseReceived;                    //@synthesize responseReceived=_responseReceived - In the implementation block
@property (nonatomic,readonly) BOOL isComplete; 
-(BOOL)isComplete;
-(void)setMessageID:(NSString *)arg1 ;
-(BOOL)responseReceived;
-(id)debugDescription;
-(id)description;
-(void)setResponseReceived:(BOOL)arg1 ;
-(id)initWithMessageID:(id)arg1 ;
-(NSString *)messageID;
-(BOOL)deviceACKReceived;
-(BOOL)applicationACKReceived;
-(id)initFiller;
-(void)setDeviceACKReceived:(BOOL)arg1 ;
-(void)setApplicationACKReceived:(BOOL)arg1 ;
@end

