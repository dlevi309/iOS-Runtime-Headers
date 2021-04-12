/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <UIKitCore/_UICollectionLayoutAPIRespresenting.h>

@class _UICollectionLayoutDimension;

@interface _UICollectionLayoutSize : NSObject <NSCopying, _UICollectionLayoutAPIRespresenting> {

	_UICollectionLayoutDimension* _width;
	_UICollectionLayoutDimension* _height;

}

@property (nonatomic,readonly) _UICollectionLayoutDimension * width; 
@property (nonatomic,readonly) _UICollectionLayoutDimension * height; 
+(id)sizeWithWidth:(id)arg1 height:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_UICollectionLayoutDimension *)width;
-(_UICollectionLayoutDimension *)height;
-(id)_apiRepresentation;
-(id)initWithWidth:(id)arg1 height:(id)arg2 ;
@end

