/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class PXGSpriteReference;

@interface PXGDecorationReference : NSObject {

	PXGSpriteReference* _decoratedSpriteReference;
	long long _decorationType;

}

@property (nonatomic,readonly) PXGSpriteReference * decoratedSpriteReference;              //@synthesize decoratedSpriteReference=_decoratedSpriteReference - In the implementation block
@property (nonatomic,readonly) long long decorationType;                                   //@synthesize decorationType=_decorationType - In the implementation block
-(id)init;
-(long long)decorationType;
-(PXGSpriteReference *)decoratedSpriteReference;
-(id)initWithDecoratedSpriteReference:(id)arg1 decorationType:(long long)arg2 ;
@end

