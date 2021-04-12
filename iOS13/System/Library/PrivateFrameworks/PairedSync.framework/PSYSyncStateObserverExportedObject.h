/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
*/

#import <libobjc.A.dylib/PSYSyncStateObserverInterface.h>

@protocol PSYSyncStateObserverInterface;
@class NSString;

@interface PSYSyncStateObserverExportedObject : NSObject <PSYSyncStateObserverInterface> {

	id<PSYSyncStateObserverInterface> _delegate;

}

@property (assign,nonatomic,__weak) id<PSYSyncStateObserverInterface> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PSYSyncStateObserverInterface>)delegate;
-(void)setDelegate:(id<PSYSyncStateObserverInterface>)arg1 ;
-(oneway void)didUpdateSyncForPairingID:(id)arg1 ;
@end

