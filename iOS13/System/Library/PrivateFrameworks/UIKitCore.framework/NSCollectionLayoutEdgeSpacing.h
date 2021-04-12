/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSCollectionLayoutSpacing;

@interface NSCollectionLayoutEdgeSpacing : NSObject <NSCopying> {

	NSCollectionLayoutSpacing* _leading;
	NSCollectionLayoutSpacing* _top;
	NSCollectionLayoutSpacing* _trailing;
	NSCollectionLayoutSpacing* _bottom;

}

@property (nonatomic,readonly) NSCollectionLayoutSpacing * leading; 
@property (nonatomic,readonly) NSCollectionLayoutSpacing * top; 
@property (nonatomic,readonly) NSCollectionLayoutSpacing * trailing; 
@property (nonatomic,readonly) NSCollectionLayoutSpacing * bottom; 
+(id)defaultSpacing;
+(id)flexibleSpacing:(double)arg1 ;
+(id)fixedSpacing:(double)arg1 ;
+(id)spacingForLeading:(id)arg1 top:(id)arg2 trailing:(id)arg3 bottom:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSCollectionLayoutSpacing *)leading;
-(BOOL)_hasSpacing;
-(NSDirectionalEdgeInsets)edgeOutsets;
-(id)initWithLeading:(id)arg1 top:(id)arg2 trailing:(id)arg3 bottom:(id)arg4 ;
-(id)_spacingForEdge:(unsigned long long)arg1 ;
-(NSCollectionLayoutSpacing *)top;
-(NSCollectionLayoutSpacing *)bottom;
-(NSCollectionLayoutSpacing *)trailing;
-(BOOL)isSpacingFixedForEdge:(unsigned long long)arg1 ;
-(BOOL)isSpacingFlexibleForEdge:(unsigned long long)arg1 ;
-(double)spacingForEdge:(unsigned long long)arg1 ;
@end

