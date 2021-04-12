/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreAccessories/PlugIns/Features/NowPlaying-iOS.feature/NowPlaying-iOS
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, _ACCNowPlayingPBQUpdateRequest;

@interface _ACCNowPlayingPBQUpdateRequestAccessory : NSObject {

	NSString* _accessoryUID;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _currentRequestID;
	_ACCNowPlayingPBQUpdateRequest* _currentRequest;

}

@property (nonatomic,readonly) NSString * accessoryUID;                                    //@synthesize accessoryUID=_accessoryUID - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSString * currentRequestID;                                  //@synthesize currentRequestID=_currentRequestID - In the implementation block
@property (nonatomic,retain) _ACCNowPlayingPBQUpdateRequest * currentRequest;              //@synthesize currentRequest=_currentRequest - In the implementation block
-(void)dealloc;
-(id)description;
-(NSObject*<OS_dispatch_queue>)queue;
-(_ACCNowPlayingPBQUpdateRequest *)currentRequest;
-(void)setCurrentRequest:(_ACCNowPlayingPBQUpdateRequest *)arg1 ;
-(NSString *)currentRequestID;
-(void)setCurrentRequestID:(NSString *)arg1 ;
-(NSString *)accessoryUID;
-(id)initWithAccessoryUID:(id)arg1 ;
@end

