/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)fixedSpacing:(double)arg1 ;
+(id)flexibleSpacing:(double)arg1 ;
+(id)defaultSpacing;
-(double)spacing;
-(id)description;
-(BOOL)isFlexibleSpacing;
-(BOOL)_hasSpacing;
-(id)initWithSpacing:(double)arg1 isFlexible:(BOOL)arg2 ;
-(BOOL)isFixedSpacing;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

