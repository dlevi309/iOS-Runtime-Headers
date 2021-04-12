/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(oneway void)didUpdateSyncForPairingID:(id)arg1 ;
-(void)setDelegate:(id<PSYSyncStateObserverInterface>)arg1 ;
@end

