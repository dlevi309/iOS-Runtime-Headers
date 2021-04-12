/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/

#import <libobjc.A.dylib/PHADownloadRequestManagement.h>

@protocol OS_dispatch_queue;
@class NSObject, NSDate, NSString;

@interface PHAAssetResourceDownloadRequestManager : NSObject <PHADownloadRequestManagement> {

	NSObject*<OS_dispatch_queue> _queue;
	NSDate* _dateToRequestPermissionAgain;
	unsigned long long _allowedDownloadCount;
	unsigned long long _expectedRequestsCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) unsigned long long expectedRequestsCount;              //@synthesize expectedRequestsCount=_expectedRequestsCount - In the implementation block
+(id)sharedManager;
-(id)init;
-(id)statusAsDictionary;
-(void)requestPermissionToDownloadWithPhotoLibrary:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)expectedRequestsCount;
-(void)setExpectedRequestsCount:(unsigned long long)arg1 ;
@end

