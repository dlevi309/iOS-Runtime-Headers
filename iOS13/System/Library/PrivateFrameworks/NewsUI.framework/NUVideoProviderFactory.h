/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUVideoProviderFactory.h>

@protocol NUVideoProviderFactory <NSObject>
@required
-(id)createVideoProviderWithVideoItem:(id)arg1;

@end


@protocol NUVideoEventTracker;
@class NSString;

@interface NUVideoProviderFactory : NSObject <NUVideoProviderFactory> {

	id<NUVideoEventTracker> _eventTracker;

}

@property (nonatomic,readonly) id<NUVideoEventTracker> eventTracker;              //@synthesize eventTracker=_eventTracker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<NUVideoEventTracker>)eventTracker;
-(id)createVideoProviderWithVideoItem:(id)arg1 ;
-(id)initWithEventTracker:(id)arg1 ;
@end

