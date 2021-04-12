/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoInteractionObserverFactory.h>

@protocol SVVideoEventTrackerProviding;
@class NSString;

@interface SVMoreFromInteractionObserverFactory : NSObject <SVVideoInteractionObserverFactory> {

	id<SVVideoEventTrackerProviding> _eventTrackerProvider;

}

@property (nonatomic,readonly) id<SVVideoEventTrackerProviding> eventTrackerProvider;              //@synthesize eventTrackerProvider=_eventTrackerProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVVideoEventTrackerProviding>)eventTrackerProvider;
-(id)createInteractionObserverForVideo:(id)arg1 ;
-(id)initWithVideoEventTrackerProvider:(id)arg1 ;
@end

