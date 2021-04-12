/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class AVPlayerItem, NSError, NSString;

@interface PXVideoContentProviderLoadingResult : NSObject {

	AVPlayerItem* _playerItem;
	NSError* _error;
	long long _priority;
	NSString* _resultDebugDescription;

}

@property (nonatomic,readonly) AVPlayerItem * playerItem;                      //@synthesize playerItem=_playerItem - In the implementation block
@property (nonatomic,readonly) NSError * error;                                //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) long long priority;                             //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) NSString * resultDebugDescription;              //@synthesize resultDebugDescription=_resultDebugDescription - In the implementation block
-(NSError *)error;
-(id)description;
-(id)initWithPlayerItem:(id)arg1 error:(id)arg2 priority:(long long)arg3 description:(id)arg4 ;
-(NSString *)resultDebugDescription;
-(long long)priority;
-(AVPlayerItem *)playerItem;
@end

