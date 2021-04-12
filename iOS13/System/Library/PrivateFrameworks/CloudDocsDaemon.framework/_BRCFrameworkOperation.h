/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <libobjc.A.dylib/BRCancellable.h>

@protocol BROperationClient;
@class NSObject, NSString;

@interface _BRCFrameworkOperation : _BRCOperation <BRCancellable> {

	BOOL _startedFinish;
	BOOL _ignoreMissingRemoteClientProxy;
	NSObject*<BROperationClient> _remoteClientProxy;

}

@property (nonatomic,retain) NSObject*<BROperationClient> remoteClientProxy;              //@synthesize remoteClientProxy=_remoteClientProxy - In the implementation block
@property (assign,nonatomic) BOOL ignoreMissingRemoteClientProxy;                         //@synthesize ignoreMissingRemoteClientProxy=_ignoreMissingRemoteClientProxy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(oneway void)invalidate;
-(void)start;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)setRemoteClientProxy:(NSObject*<BROperationClient>)arg1 ;
-(id)descriptionAdditionalStringWithContext:(id)arg1 ;
-(NSObject*<BROperationClient>)remoteClientProxy;
-(BOOL)ignoreMissingRemoteClientProxy;
-(void)setIgnoreMissingRemoteClientProxy:(BOOL)arg1 ;
@end

