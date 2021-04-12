/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(_ACCNowPlayingPBQUpdateRequest *)currentRequest;
-(NSString *)currentRequestID;
-(void)setCurrentRequestID:(NSString *)arg1 ;
-(id)description;
-(void)setCurrentRequest:(_ACCNowPlayingPBQUpdateRequest *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)dealloc;
-(id)initWithAccessoryUID:(id)arg1 ;
-(NSString *)accessoryUID;
@end

