/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

