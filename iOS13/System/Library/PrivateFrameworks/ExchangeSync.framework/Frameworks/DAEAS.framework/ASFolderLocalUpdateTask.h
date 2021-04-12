/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASTask.h>

@class NSString, ASFolder;

@interface ASFolderLocalUpdateTask : ASTask {

	NSString* _previousSyncKey;
	ASFolder* _folder;
	int _commandCode;
	int _requestType;
	/*^block*/id _completionBlock;
	long long _dataclasses;

}

@property (assign,nonatomic) long long dataclasses;              //@synthesize dataclasses=_dataclasses - In the implementation block
+(id)taskWithFolder:(id)arg1 previousSyncKey:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)finishWithError:(id)arg1 ;
-(id)requestBody;
-(long long)dataclasses;
-(void)setDataclasses:(long long)arg1 ;
-(int)commandCode;
-(BOOL)getTopLevelToken:(char*)arg1 outStatusCodePage:(char*)arg2 outStatusToken:(char*)arg3 ;
-(BOOL)processContext:(id)arg1 ;
-(id)initWithFolder:(id)arg1 previousSyncKey:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_appendRequestBodyFolderDataToWBXMLData:(id)arg1 ;
@end

