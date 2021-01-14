/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardHIDEventProcessors.framework/BackBoardHIDEventProcessors
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol BKHIDEventSenderInfo;
@class NSSet, NSString;

@interface BKHIDPointerEventRecord : NSObject <BSDescriptionProviding> {

	BOOL _didTrackPointerMovement;
	BOOL _didTrackButtonDown;
	BOOL _trackingPointerMovement;
	BOOL _trackingButtonDown;
	id<BKHIDEventSenderInfo> _senderInfo;
	NSSet* _destinations;
	double _destinationCaptureTime;

}

@property (nonatomic,retain) id<BKHIDEventSenderInfo> senderInfo;              //@synthesize senderInfo=_senderInfo - In the implementation block
@property (nonatomic,retain) NSSet * destinations;                             //@synthesize destinations=_destinations - In the implementation block
@property (assign,nonatomic) double destinationCaptureTime;                    //@synthesize destinationCaptureTime=_destinationCaptureTime - In the implementation block
@property (assign,nonatomic) BOOL trackingPointerMovement;                     //@synthesize trackingPointerMovement=_trackingPointerMovement - In the implementation block
@property (assign,nonatomic) BOOL trackingButtonDown;                          //@synthesize trackingButtonDown=_trackingButtonDown - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(void)setDestinations:(NSSet *)arg1 ;
-(NSSet *)destinations;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id<BKHIDEventSenderInfo>)senderInfo;
-(void)setSenderInfo:(id<BKHIDEventSenderInfo>)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)setTrackingPointerMovement:(BOOL)arg1 ;
-(void)setTrackingButtonDown:(BOOL)arg1 ;
-(double)destinationCaptureTime;
-(void)setDestinationCaptureTime:(double)arg1 ;
-(BOOL)trackingPointerMovement;
-(BOOL)trackingButtonDown;
@end

