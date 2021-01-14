/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASTask.h>

@class NSString;

@interface ASFolderSyncTask : ASTask {

	NSString* _previousSyncKey;
	BOOL _requireChangedFolders;
	int _numDownloadedElements;
	long long _dataclasses;
	BOOL _isSpinning;

}

@property (assign,nonatomic) BOOL requireChangedFolders;              //@synthesize requireChangedFolders=_requireChangedFolders - In the implementation block
@property (assign,nonatomic) long long dataclasses;                   //@synthesize dataclasses=_dataclasses - In the implementation block
-(int)numDownloadedElements;
-(void)finishWithError:(id)arg1 ;
-(void)_setSpinning:(BOOL)arg1 ;
-(long long)dataclasses;
-(id)requestBody;
-(void)dealloc;
-(void)setDataclasses:(long long)arg1 ;
-(long long)taskStatusForExchangeStatus:(int)arg1 ;
-(int)commandCode;
-(BOOL)getTopLevelToken:(char*)arg1 outStatusCodePage:(char*)arg2 outStatusToken:(char*)arg3 ;
-(BOOL)processContext:(id)arg1 ;
-(id)initWithPreviousSyncKey:(id)arg1 ;
-(BOOL)requireChangedFolders;
-(void)setRequireChangedFolders:(BOOL)arg1 ;
@end

