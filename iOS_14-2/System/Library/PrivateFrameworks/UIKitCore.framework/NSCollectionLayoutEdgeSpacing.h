/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)fixedSpacing:(double)arg1 ;
+(id)flexibleSpacing:(double)arg1 ;
+(id)defaultSpacing;
+(id)spacingForLeading:(id)arg1 top:(id)arg2 trailing:(id)arg3 bottom:(id)arg4 ;
-(NSCollectionLayoutSpacing *)leading;
-(double)spacingForEdge:(unsigned long long)arg1 ;
-(NSDirectionalEdgeInsets)edgeOutsets;
-(id)description;
-(id)_spacingForEdge:(unsigned long long)arg1 ;
-(BOOL)isSpacingFlexibleForEdge:(unsigned long long)arg1 ;
-(NSCollectionLayoutSpacing *)bottom;
-(NSCollectionLayoutSpacing *)top;
-(BOOL)isSpacingFixedForEdge:(unsigned long long)arg1 ;
-(BOOL)_hasSpacing;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithLeading:(id)arg1 top:(id)arg2 trailing:(id)arg3 bottom:(id)arg4 ;
-(NSCollectionLayoutSpacing *)trailing;
-(BOOL)isEqual:(id)arg1 ;
@end

