/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIResponder *)owner;
-(void)attachOverrider:(id)arg1 forTypes:(long long)arg2 ;
-(void)detachOverrider:(id)arg1 forTypes:(long long)arg2 ;
-(long long)typesForResponder:(id)arg1 ;
-(id)description;
-(void)dealloc;
@end

