/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)debugDescription;
-(BOOL)isComplete;
-(BOOL)responseReceived;
-(NSString *)messageID;
-(void)setMessageID:(NSString *)arg1 ;
-(void)setResponseReceived:(BOOL)arg1 ;
-(id)initWithMessageID:(id)arg1 ;
-(BOOL)deviceACKReceived;
-(BOOL)applicationACKReceived;
-(id)initFiller;
-(void)setDeviceACKReceived:(BOOL)arg1 ;
-(void)setApplicationACKReceived:(BOOL)arg1 ;
@end

