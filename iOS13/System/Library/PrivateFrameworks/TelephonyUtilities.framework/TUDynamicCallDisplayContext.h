/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <TelephonyUtilities/TUMutableCallDisplayContext.h>

@protocol TUDynamicCallDisplayContextDelegate, OS_dispatch_queue;
@class NSObject, CXCallDirectoryManager;

@interface TUDynamicCallDisplayContext : TUMutableCallDisplayContext {

	id<TUDynamicCallDisplayContextDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _serialQueue;
	CXCallDirectoryManager* _callDirectoryManager;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                             //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,retain) CXCallDirectoryManager * callDirectoryManager;                        //@synthesize callDirectoryManager=_callDirectoryManager - In the implementation block
@property (assign,nonatomic,__weak) id<TUDynamicCallDisplayContextDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id<TUDynamicCallDisplayContextDelegate>)delegate;
-(void)setDelegate:(id<TUDynamicCallDisplayContextDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(CXCallDirectoryManager *)callDirectoryManager;
-(id)initWithCall:(id)arg1 contactIdentifier:(id)arg2 serialQueue:(id)arg3 ;
-(id)initWithCall:(id)arg1 contactIdentifier:(id)arg2 serialQueue:(id)arg3 contactsDataSource:(id)arg4 ;
-(void)_initializeSynchronousStateWithCall:(id)arg1 contactIdentifier:(id)arg2 contactsDataProvider:(id)arg3 ;
-(void)_initializeAsynchronousStateWithCall:(id)arg1 ;
-(void)setCallDirectoryManager:(CXCallDirectoryManager *)arg1 ;
-(id)initWithDisplayContext:(id)arg1 call:(id)arg2 serialQueue:(id)arg3 ;
@end

