/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVPlayerTimeControlStatusObserverFactory.h>

@protocol SVPlayerTimeControlStatusObserverFactory <NSObject>
@required
-(id)createTimeControlStatusObserverForVideo:(id)arg1;

@end


@protocol SVPlayerProviding;
@class NSString;

@interface SVPlayerTimeControlStatusObserverFactory : NSObject <SVPlayerTimeControlStatusObserverFactory> {

	id<SVPlayerProviding> _playerProvider;

}

@property (nonatomic,readonly) id<SVPlayerProviding> playerProvider;              //@synthesize playerProvider=_playerProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVPlayerProviding>)playerProvider;
-(id)initWithPlayerProvider:(id)arg1 ;
-(id)createTimeControlStatusObserverForVideo:(id)arg1 ;
@end

