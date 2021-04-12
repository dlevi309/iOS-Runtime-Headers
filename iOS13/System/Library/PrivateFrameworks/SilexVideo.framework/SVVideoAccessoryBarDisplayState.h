/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/


@class SVVideoAccessoryBarItemDisplayState;

@interface SVVideoAccessoryBarDisplayState : NSObject {

	SVVideoAccessoryBarItemDisplayState* _leadingState;
	SVVideoAccessoryBarItemDisplayState* _trailingState;

}

@property (nonatomic,readonly) SVVideoAccessoryBarItemDisplayState * leadingState;               //@synthesize leadingState=_leadingState - In the implementation block
@property (nonatomic,readonly) SVVideoAccessoryBarItemDisplayState * trailingState;              //@synthesize trailingState=_trailingState - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(SVVideoAccessoryBarItemDisplayState *)leadingState;
-(SVVideoAccessoryBarItemDisplayState *)trailingState;
-(id)initWithLeadingState:(id)arg1 trailingState:(id)arg2 ;
@end

