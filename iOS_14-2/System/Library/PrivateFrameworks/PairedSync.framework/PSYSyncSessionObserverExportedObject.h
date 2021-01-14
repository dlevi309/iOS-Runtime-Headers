/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

