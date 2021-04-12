/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@interface _UIRKEOTouchTracking : NSObject {

	BOOL _valid;
	long long _type;
	double _largestObservedRadius;
	Class _beganGestureClass;

}

@property (assign,nonatomic) BOOL valid;                                //@synthesize valid=_valid - In the implementation block
@property (assign,nonatomic) long long type;                            //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) double largestObservedRadius;              //@synthesize largestObservedRadius=_largestObservedRadius - In the implementation block
@property (nonatomic,retain) Class beganGestureClass;                   //@synthesize beganGestureClass=_beganGestureClass - In the implementation block
-(void)setValid:(BOOL)arg1 ;
-(Class)beganGestureClass;
-(void)setType:(long long)arg1 ;
-(void)setBeganGestureClass:(Class)arg1 ;
-(double)largestObservedRadius;
-(void)setLargestObservedRadius:(double)arg1 ;
-(BOOL)valid;
-(long long)type;
@end

