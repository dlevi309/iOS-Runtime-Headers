/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
*/


#import <TVRemoteUI/TVRemoteUI-Structs.h>
@interface _TVRCTouchInfo : NSObject {

	BOOL _pendingCancellation;
	BOOL _isLikelyLongListScrollingEdgeGesture;
	long long _virtualPhase;
	double _timestamp;
	double _previousTimestamp;
	CGPoint _initialLocation;
	CGPoint _initialProportionalLocation;
	CGRect _boundingBox;

}

@property (assign,nonatomic) long long virtualPhase;                                 //@synthesize virtualPhase=_virtualPhase - In the implementation block
@property (assign,nonatomic) BOOL pendingCancellation;                               //@synthesize pendingCancellation=_pendingCancellation - In the implementation block
@property (assign,nonatomic) CGPoint initialLocation;                                //@synthesize initialLocation=_initialLocation - In the implementation block
@property (assign,nonatomic) CGRect boundingBox;                                     //@synthesize boundingBox=_boundingBox - In the implementation block
@property (assign,nonatomic) CGPoint initialProportionalLocation;                    //@synthesize initialProportionalLocation=_initialProportionalLocation - In the implementation block
@property (assign,nonatomic) BOOL isLikelyLongListScrollingEdgeGesture;              //@synthesize isLikelyLongListScrollingEdgeGesture=_isLikelyLongListScrollingEdgeGesture - In the implementation block
@property (assign,nonatomic) double timestamp;                                       //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) double previousTimestamp;                               //@synthesize previousTimestamp=_previousTimestamp - In the implementation block
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(CGRect)boundingBox;
-(void)setBoundingBox:(CGRect)arg1 ;
-(CGPoint)initialLocation;
-(void)setInitialLocation:(CGPoint)arg1 ;
-(void)setPreviousTimestamp:(double)arg1 ;
-(double)previousTimestamp;
-(long long)virtualPhase;
-(void)setVirtualPhase:(long long)arg1 ;
-(BOOL)pendingCancellation;
-(void)setPendingCancellation:(BOOL)arg1 ;
-(CGPoint)initialProportionalLocation;
-(void)setInitialProportionalLocation:(CGPoint)arg1 ;
-(BOOL)isLikelyLongListScrollingEdgeGesture;
-(void)setIsLikelyLongListScrollingEdgeGesture:(BOOL)arg1 ;
@end

