/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <UIKitCore/_UICollectionLayoutAPIRespresenting.h>

@class _UICollectionLayoutSpacing;

@interface _UICollectionLayoutEdgeSpacing : NSObject <NSCopying, _UICollectionLayoutAPIRespresenting> {

	_UICollectionLayoutSpacing* _leading;
	_UICollectionLayoutSpacing* _top;
	_UICollectionLayoutSpacing* _trailing;
	_UICollectionLayoutSpacing* _bottom;

}

@property (nonatomic,readonly) _UICollectionLayoutSpacing * leading; 
@property (nonatomic,readonly) _UICollectionLayoutSpacing * top; 
@property (nonatomic,readonly) _UICollectionLayoutSpacing * trailing; 
@property (nonatomic,readonly) _UICollectionLayoutSpacing * bottom; 
+(id)defaultSpacing;
+(id)flexibleSpacing:(double)arg1 ;
+(id)fixedSpacing:(double)arg1 ;
+(id)spacingForLeading:(id)arg1 top:(id)arg2 trailing:(id)arg3 bottom:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_UICollectionLayoutSpacing *)leading;
-(id)initWithLeading:(id)arg1 top:(id)arg2 trailing:(id)arg3 bottom:(id)arg4 ;
-(_UICollectionLayoutSpacing *)top;
-(_UICollectionLayoutSpacing *)bottom;
-(_UICollectionLayoutSpacing *)trailing;
-(id)_apiRepresentation;
@end

