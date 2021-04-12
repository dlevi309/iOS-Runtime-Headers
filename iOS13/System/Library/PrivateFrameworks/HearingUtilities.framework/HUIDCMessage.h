/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
*/

#import <HearingUtilities/HUSimpleMessage.h>

@class NSString;

@interface HUIDCMessage : HUSimpleMessage {

	NSString* _UUID;
	/*^block*/id _sendCompletion;

}

@property (nonatomic,retain) NSString * UUID;              //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,copy) id sendCompletion;              //@synthesize sendCompletion=_sendCompletion - In the implementation block
+(id)messageWithPayload:(id)arg1 andSendCompletion:(/*^block*/id)arg2 ;
-(NSString *)UUID;
-(void)setUUID:(NSString *)arg1 ;
-(id)initWithPayload:(id)arg1 ;
-(void)setSendCompletion:(id)arg1 ;
-(id)transportPayload;
-(id)sendCompletion;
@end

