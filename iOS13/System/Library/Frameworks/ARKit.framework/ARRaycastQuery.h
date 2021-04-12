/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


@interface ARRaycastQuery : NSObject {

	long long _target;
	long long _targetAlignment;
	 _origin;
	 _direction;

}

@property (nonatomic,readonly)  origin;                                //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly)  direction;                             //@synthesize direction=_direction - In the implementation block
@property (nonatomic,readonly) long long target;                       //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) long long targetAlignment;              //@synthesize targetAlignment=_targetAlignment - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(long long)target;
-()origin;
-()direction;
-(long long)targetAlignment;
-(id)initWithOrigin:(long long)arg1 direction:(long long)arg2 ;
@end

