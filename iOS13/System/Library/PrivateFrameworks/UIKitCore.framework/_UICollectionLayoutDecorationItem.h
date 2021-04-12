/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UICollectionLayoutItem.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <UIKitCore/_UICollectionLayoutAPIRespresenting.h>

@class NSString, _UICollectionLayoutAnchor;

@interface _UICollectionLayoutDecorationItem : _UICollectionLayoutItem <NSCopying, _UICollectionLayoutAPIRespresenting> {

	NSString* _elementKind;
	_UICollectionLayoutAnchor* _containerAnchor;
	long long _zIndex;
	Class _registrationViewClass;
	BOOL _isBackgroundDecoration;

}

@property (assign,nonatomic) long long zIndex;                                                            //@synthesize zIndex=_zIndex - In the implementation block
@property (setter=_setRegistrationViewClass:,nonatomic,retain) Class _registrationViewClass; 
+(id)backgroundDecorationItemWithElementKind:(id)arg1 ;
+(id)decorationItemWithSize:(id)arg1 elementKind:(id)arg2 containerAnchor:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)zIndex;
-(Class)_registrationViewClass;
-(void)setZIndex:(long long)arg1 ;
-(void)_setRegistrationViewClass:(Class)arg1 ;
-(id)_apiRepresentation;
-(id)initWithSize:(id)arg1 elementKind:(id)arg2 containerAnchor:(id)arg3 zIndex:(long long)arg4 contentInsets:(NSDirectionalEdgeInsets)arg5 edgeSpacing:(id)arg6 name:(id)arg7 registrationViewClass:(Class)arg8 isBackgroundDecoration:(BOOL)arg9 ;
@end

