/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSMutableArray, UIResponder;

@interface _UIResponder_Override_Host : NSObject {

	NSMutableArray* _overrides;
	UIResponder* _owner;

}

@property (nonatomic,__weak,readonly) UIResponder * owner;              //@synthesize owner=_owner - In the implementation block
+(id)hostForResponder:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(UIResponder *)owner;
-(void)attachOverrider:(id)arg1 forTypes:(long long)arg2 ;
-(void)detachOverrider:(id)arg1 forTypes:(long long)arg2 ;
-(long long)typesForResponder:(id)arg1 ;
@end

