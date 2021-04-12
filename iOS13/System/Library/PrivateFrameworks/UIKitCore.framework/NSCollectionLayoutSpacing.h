/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NSCollectionLayoutSpacing : NSObject <NSCopying> {

	double _spacing;
	BOOL _isFlexible;

}

@property (nonatomic,readonly) double spacing; 
@property (nonatomic,readonly) BOOL isFlexibleSpacing; 
@property (nonatomic,readonly) BOOL isFixedSpacing; 
+(id)defaultSpacing;
+(id)flexibleSpacing:(double)arg1 ;
+(id)fixedSpacing:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)spacing;
-(id)initWithSpacing:(double)arg1 isFlexible:(BOOL)arg2 ;
-(BOOL)isFlexibleSpacing;
-(BOOL)_hasSpacing;
-(BOOL)isFixedSpacing;
@end

