/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/

#import <PodcastsKit/MTBaseQueryObserver.h>
#import <libobjc.A.dylib/NSFetchedResultsControllerDelegate.h>

@class NSString;

@interface MTAllPropertyChangesQueryObserver : MTBaseQueryObserver <NSFetchedResultsControllerDelegate> {

	BOOL _inCallback;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startObserving;
-(void)controllerDidChangeContent:(id)arg1 ;
-(void)notifyObservers;
-(id)addResultsChangedHandler:(/*^block*/id)arg1 ;
@end

