/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSString, PXGSpriteReference, PXGLayout;

@interface PXGHitTestResult : NSObject {

	/*^block*/id _userDataProvider;
	id _userData;
	NSString* _identifier;
	BOOL _isDecorated;
	PXGSpriteReference* _spriteReference;
	PXGLayout* _layout;

}

@property (nonatomic,readonly) PXGSpriteReference * spriteReference;              //@synthesize spriteReference=_spriteReference - In the implementation block
@property (nonatomic,readonly) PXGLayout * layout;                                //@synthesize layout=_layout - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) id userData; 
@property (nonatomic,readonly) BOOL isDecorated;                                  //@synthesize isDecorated=_isDecorated - In the implementation block
-(PXGSpriteReference *)spriteReference;
-(id)init;
-(id)userData;
-(id)initWithSpriteReference:(id)arg1 layout:(id)arg2 identifier:(id)arg3 userDataProvider:(/*^block*/id)arg4 ;
-(id)description;
-(BOOL)isDecorated;
-(id)initWithSpriteReference:(id)arg1 layout:(id)arg2 identifier:(id)arg3 userData:(id)arg4 ;
-(NSString *)identifier;
-(PXGLayout *)layout;
@end

