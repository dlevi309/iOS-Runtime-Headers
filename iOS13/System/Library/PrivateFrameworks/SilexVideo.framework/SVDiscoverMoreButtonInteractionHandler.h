/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVInteractionHandling.h>

@protocol SVDiscoverMoreInteractionHandling;
@class NSString;

@interface SVDiscoverMoreButtonInteractionHandler : NSObject <SVInteractionHandling> {

	id<SVDiscoverMoreInteractionHandling> _discoverMoreInteractionHandler;

}

@property (nonatomic,readonly) id<SVDiscoverMoreInteractionHandling> discoverMoreInteractionHandler;              //@synthesize discoverMoreInteractionHandler=_discoverMoreInteractionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleInteractionWithContext:(id)arg1 ;
-(id<SVDiscoverMoreInteractionHandling>)discoverMoreInteractionHandler;
-(id)initWithDiscoverMoreInteractionHandler:(id)arg1 ;
@end

