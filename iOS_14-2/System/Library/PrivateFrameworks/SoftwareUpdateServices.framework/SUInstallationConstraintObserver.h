/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(SUDownload *)download;
-(id)init;
-(id)initWithDownload:(id)arg1 ;
-(void)invalidateWithError:(id)arg1 ;
-(void)invalidate;
-(void)dealloc;
-(void)_queue_noteInstallationConstraintMonitor:(id)arg1 constraintsDidChange:(unsigned long long)arg2 ;
-(void)_removeToken:(id)arg1 ;
-(id)initWithDownload:(id)arg1 queue:(id)arg2 constraints:(id)arg3 ;
-(id)registerObserverBlock:(/*^block*/id)arg1 ;
-(id)monitorOfClass:(Class)arg1 ;
-(BOOL)_hasAnyBlockObservers;
@end

