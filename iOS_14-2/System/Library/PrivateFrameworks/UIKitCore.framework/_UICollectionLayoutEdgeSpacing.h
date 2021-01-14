/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)fixedSpacing:(double)arg1 ;
+(id)flexibleSpacing:(double)arg1 ;
+(id)defaultSpacing;
+(id)spacingForLeading:(id)arg1 top:(id)arg2 trailing:(id)arg3 bottom:(id)arg4 ;
-(_UICollectionLayoutSpacing *)leading;
-(id)_apiRepresentation;
-(_UICollectionLayoutSpacing *)bottom;
-(_UICollectionLayoutSpacing *)top;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithLeading:(id)arg1 top:(id)arg2 trailing:(id)arg3 bottom:(id)arg4 ;
-(_UICollectionLayoutSpacing *)trailing;
@end

