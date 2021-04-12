/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVPlayerItemLoadingStateContext.h>
@class AVPlayerItem, NSError;


@protocol SVPlayerItemLoadingStateContext <NFStateMachineContextType>
@property (nonatomic,readonly) AVPlayerItem * item; 
@property (nonatomic,readonly) NSError * error; 
@required
-(NSError *)error;
-(AVPlayerItem *)item;

@end


@class AVPlayerItem, NSError, NSString;

@interface SVPlayerItemLoadingStateContext : NSObject <SVPlayerItemLoadingStateContext> {

	AVPlayerItem* _item;
	NSError* _error;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) AVPlayerItem * item;                 //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) NSError * error;                     //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(AVPlayerItem *)item;
-(id)initWithError:(id)arg1 ;
-(id)initWithPlayerItem:(id)arg1 ;
@end

