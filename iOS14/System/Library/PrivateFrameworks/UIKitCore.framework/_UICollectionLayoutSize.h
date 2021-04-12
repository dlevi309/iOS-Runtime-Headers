/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(_UICollectionLayoutDimension *)width;
-(_UICollectionLayoutDimension *)height;
-(id)initWithWidth:(id)arg1 height:(id)arg2 ;
-(id)_apiRepresentation;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

