/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/Preferences-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PSSpecifierAction : NSObject <NSCopying> {

	/*^block*/id _getter;
	/*^block*/id _setter;

}

@property (nonatomic,copy) id getter;              //@synthesize getter=_getter - In the implementation block
@property (nonatomic,copy) id setter;              //@synthesize setter=_setter - In the implementation block
+(id)actionWithGetter:(/*^block*/id)arg1 setter:(/*^block*/id)arg2 ;
+(id)actionWithTarget:(id)arg1 getterSelector:(SEL)arg2 setterSelector:(SEL)arg3 ;
+(id)actionWithBoolDetailClass:(Class)arg1 ;
-(id)getter;
-(id)setter;
-(void)setGetter:(id)arg1 ;
-(void)setSetter:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

