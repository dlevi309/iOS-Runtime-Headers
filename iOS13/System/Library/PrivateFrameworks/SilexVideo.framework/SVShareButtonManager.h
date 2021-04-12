/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoTransitionObserver.h>

@protocol SVVideoSharingPolicy;
@class AVControlItem, NSString;

@interface SVShareButtonManager : NSObject <SVVideoTransitionObserver> {

	AVControlItem* _controlItem;
	id<SVVideoSharingPolicy> _sharingPolicy;

}

@property (nonatomic,readonly) AVControlItem * controlItem;                         //@synthesize controlItem=_controlItem - In the implementation block
@property (nonatomic,readonly) id<SVVideoSharingPolicy> sharingPolicy;              //@synthesize sharingPolicy=_sharingPolicy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)initWithShareControlItem:(id)arg1 sharingPolicy:(id)arg2 ;
-(id<SVVideoSharingPolicy>)sharingPolicy;
-(AVControlItem *)controlItem;
@end

