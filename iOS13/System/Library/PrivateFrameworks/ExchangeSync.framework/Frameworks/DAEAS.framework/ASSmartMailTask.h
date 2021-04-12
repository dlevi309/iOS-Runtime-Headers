/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASSendMailTask.h>

@class NSString;

@interface ASSmartMailTask : ASSendMailTask {

	int _messageType;
	NSString* _originalMessageId;
	NSString* _instanceId;
	NSString* _originalFolderId;
	NSString* _originalLongId;
	BOOL _retryWithoutReferences;
	BOOL _replaceMime;
	BOOL _shouldNotRetry;

}

@property (assign,nonatomic) BOOL shouldNotRetry;              //@synthesize shouldNotRetry=_shouldNotRetry - In the implementation block
-(id)contentType;
-(id)command;
-(int)commandCode;
-(BOOL)getTopLevelToken:(char*)arg1 outStatusCodePage:(char*)arg2 outStatusToken:(char*)arg3 ;
-(BOOL)processContext:(id)arg1 ;
-(id)parameterData;
-(id)initWithMessage:(id)arg1 messageID:(id)arg2 messageType:(int)arg3 originalMessageID:(id)arg4 instanceId:(id)arg5 originalFolderID:(id)arg6 originalLongID:(id)arg7 replaceMime:(BOOL)arg8 ;
-(void)handleTopLevelErrorStatus:(id)arg1 ;
-(id)requestBodyStreamOutKnownSize:(int*)arg1 ;
-(BOOL)shouldNotRetry;
-(void)setShouldNotRetry:(BOOL)arg1 ;
@end

