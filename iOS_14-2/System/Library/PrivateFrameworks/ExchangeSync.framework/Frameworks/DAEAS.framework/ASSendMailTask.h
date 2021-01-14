/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASTask.h>

@class NSData, NSString;

@interface ASSendMailTask : ASTask {

	NSData* _mimeMessage;
	NSString* _messageID;

}
-(id)contentType;
-(void)finishWithError:(id)arg1 ;
-(id)command;
-(id)requestBody;
-(long long)taskStatusForExchangeStatus:(int)arg1 ;
-(int)commandCode;
-(BOOL)getTopLevelToken:(char*)arg1 outStatusCodePage:(char*)arg2 outStatusToken:(char*)arg3 ;
-(BOOL)processContext:(id)arg1 ;
-(id)parameterData;
-(id)initWithMessage:(id)arg1 messageID:(id)arg2 ;
-(id)requestBodyStreamOutKnownSize:(int*)arg1 ;
@end

