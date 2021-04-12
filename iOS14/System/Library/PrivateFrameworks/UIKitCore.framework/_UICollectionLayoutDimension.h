/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)absolute:(double)arg1 ;
+(id)estimated:(double)arg1 ;
+(id)fractionalHeight:(double)arg1 ;
+(id)fractionalWidth:(double)arg1 ;
-(BOOL)isEstimated;
-(double)dimension;
-(BOOL)isFractionalWidth;
-(id)_apiRepresentation;
-(BOOL)isAbsolute;
-(id)initWithSemantic:(long long)arg1 dimension:(double)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isFractionalHeight;
@end

