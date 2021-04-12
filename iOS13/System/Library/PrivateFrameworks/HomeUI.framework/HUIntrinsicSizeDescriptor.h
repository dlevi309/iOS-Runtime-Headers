/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <libobjc.A.dylib/NAIdentifiable.h>

@class NSNumber, NSString;

@interface HUIntrinsicSizeDescriptor : NSObject <NAIdentifiable> {

	unsigned long long _flexType;
	NSNumber* _aspectRatio;
	CGSize _intrinsicSize;

}

@property (nonatomic,readonly) CGSize intrinsicSize;                     //@synthesize intrinsicSize=_intrinsicSize - In the implementation block
@property (nonatomic,readonly) unsigned long long flexType;              //@synthesize flexType=_flexType - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * aspectRatio;              //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)na_identity;
+(id)noIntrinsicSizeDescriptor;
+(id)descriptorWithIntrinsicSize:(CGSize)arg1 flexType:(unsigned long long)arg2 ;
+(id)descriptorWithAspectRatio:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSNumber *)aspectRatio;
-(CGSize)intrinsicSize;
-(id)initWithIntrinsicSize:(CGSize)arg1 flexType:(unsigned long long)arg2 aspectRatio:(id)arg3 ;
-(unsigned long long)flexType;
@end

