/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)dataclasses;
-(id)requestBody;
-(void)setDataclasses:(long long)arg1 ;
-(int)commandCode;
-(BOOL)getTopLevelToken:(char*)arg1 outStatusCodePage:(char*)arg2 outStatusToken:(char*)arg3 ;
-(BOOL)processContext:(id)arg1 ;
-(id)initWithFolder:(id)arg1 previousSyncKey:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_appendRequestBodyFolderDataToWBXMLData:(id)arg1 ;
@end

