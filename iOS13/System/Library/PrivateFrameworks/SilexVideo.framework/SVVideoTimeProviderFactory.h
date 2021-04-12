/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoTimeProviderFactory.h>

@protocol SVVideoTimeProviderFactory <NSObject>
@required
-(id)createTimeProviderForVideo:(id)arg1;

@end


@protocol SVPlayerProviding, SVTimeConverting;
@class NSString;

@interface SVVideoTimeProviderFactory : NSObject <SVVideoTimeProviderFactory> {

	id<SVPlayerProviding> _playerProvider;
	id<SVTimeConverting> _timeConverter;

}

@property (nonatomic,readonly) id<SVPlayerProviding> playerProvider;              //@synthesize playerProvider=_playerProvider - In the implementation block
@property (nonatomic,readonly) id<SVTimeConverting> timeConverter;                //@synthesize timeConverter=_timeConverter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)createTimeProviderForVideo:(id)arg1 ;
-(id<SVPlayerProviding>)playerProvider;
-(id<SVTimeConverting>)timeConverter;
-(id)initWithPlayerProvider:(id)arg1 timeConverter:(id)arg2 ;
@end

