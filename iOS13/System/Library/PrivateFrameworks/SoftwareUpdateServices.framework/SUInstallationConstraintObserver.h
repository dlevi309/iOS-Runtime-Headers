/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/

#import <SoftwareUpdateServices/SUComposedInstallationConstraintMonitor.h>
#import <libobjc.A.dylib/SUInvalidatable.h>

@protocol SUInstallationConstraintObserverDelegate;
@class SUDownload, NSMapTable, NSString;

@interface SUInstallationConstraintObserver : SUComposedInstallationConstraintMonitor <SUInvalidatable> {

	id<SUInstallationConstraintObserverDelegate> _delegate;
	SUDownload* _download;
	NSMapTable* _queue_observerBlockTokens;
	BOOL _queue_invalidated;
	unsigned long long _queue_tokenCount;

}

@property (assign,nonatomic) id<SUInstallationConstraintObserverDelegate> delegate; 
@property (nonatomic,retain,readonly) SUDownload * download;                                     //@synthesize download=_download - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)invalidateWithError:(id)arg1 ;
-(SUDownload *)download;
-(id)initWithDownload:(id)arg1 ;
-(void)_queue_noteInstallationConstraintMonitor:(id)arg1 constraintsDidChange:(unsigned long long)arg2 ;
-(void)_removeToken:(id)arg1 ;
-(id)initWithDownload:(id)arg1 queue:(id)arg2 constraints:(id)arg3 ;
-(id)registerObserverBlock:(/*^block*/id)arg1 ;
-(id)monitorOfClass:(Class)arg1 ;
-(BOOL)_hasAnyBlockObservers;
@end

