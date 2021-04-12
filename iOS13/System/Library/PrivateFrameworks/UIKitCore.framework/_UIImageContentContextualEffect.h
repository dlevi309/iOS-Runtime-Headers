/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIImageContentEffect, _UIImageContentLayoutSource;
#import <UIKitCore/UIKitCore-Structs.h>
@interface _UIImageContentContextualEffect : NSObject {

	id<_UIImageContentEffect> _effect;
	id<_UIImageContentLayoutSource> _source;

}

@property (nonatomic,readonly) id<_UIImageContentEffect> effect;                    //@synthesize effect=_effect - In the implementation block
@property (nonatomic,readonly) id<_UIImageContentLayoutSource> source;              //@synthesize source=_source - In the implementation block
+(id)effect:(id)arg1 withSource:(id)arg2 ;
-(id<_UIImageContentLayoutSource>)source;
-(id<_UIImageContentEffect>)effect;
-(id)_renditionWithCGImageProvider:(/*^block*/id)arg1 size:(CGSize)arg2 lazy:(BOOL)arg3 ;
@end

