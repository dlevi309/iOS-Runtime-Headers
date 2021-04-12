/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
*/

#import <libobjc.A.dylib/PSYSyncSessionObserverInterface.h>

@protocol PSYSyncSessionObserverInterface;
@class NSString;

@interface PSYSyncSessionObserverExportedObject : NSObject <PSYSyncSessionObserverInterface> {

	id<PSYSyncSessionObserverInterface> _delegate;

}

@property (assign,nonatomic,__weak) id<PSYSyncSessionObserverInterface> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PSYSyncSessionObserverInterface>)delegate;
-(void)setDelegate:(id<PSYSyncSessionObserverInterface>)arg1 ;
-(oneway void)invalidateSyncSession:(id)arg1 ;
-(oneway void)updateSyncSession:(id)arg1 ;
-(oneway void)syncSessionWillStart:(id)arg1 ;
@end

