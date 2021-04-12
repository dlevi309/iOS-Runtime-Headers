/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <UIKitCore/_UICollectionLayoutAPIRespresenting.h>

@interface _UICollectionLayoutDimension : NSObject <NSCopying, _UICollectionLayoutAPIRespresenting> {

	long long _semantic;
	double _dimension;

}

@property (nonatomic,readonly) double dimension; 
@property (nonatomic,readonly) BOOL isAbsolute; 
@property (nonatomic,readonly) BOOL isEstimated; 
@property (nonatomic,readonly) BOOL isFractionalWidth; 
@property (nonatomic,readonly) BOOL isFractionalHeight; 
+(id)fractionalWidth:(double)arg1 ;
+(id)fractionalHeight:(double)arg1 ;
+(id)absolute:(double)arg1 ;
+(id)estimated:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)dimension;
-(BOOL)isEstimated;
-(BOOL)isAbsolute;
-(BOOL)isFractionalWidth;
-(BOOL)isFractionalHeight;
-(id)_apiRepresentation;
-(id)initWithSemantic:(long long)arg1 dimension:(double)arg2 ;
@end

