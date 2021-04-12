/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
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
-()direction;
-()origin;
-(id)description;
-(long long)target;
-(BOOL)isEqual:(id)arg1 ;
-(long long)targetAlignment;
-(id)initWithOrigin:(long long)arg1 direction:(long long)arg2 ;
@end

