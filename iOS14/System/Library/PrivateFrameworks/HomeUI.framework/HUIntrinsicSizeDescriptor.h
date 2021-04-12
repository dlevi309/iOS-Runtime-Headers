/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)noIntrinsicSizeDescriptor;
+(id)na_identity;
+(id)descriptorWithIntrinsicSize:(CGSize)arg1 flexType:(unsigned long long)arg2 ;
+(id)descriptorWithAspectRatio:(double)arg1 ;
-(NSNumber *)aspectRatio;
-(unsigned long long)hash;
-(CGSize)intrinsicSize;
-(unsigned long long)flexType;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithIntrinsicSize:(CGSize)arg1 flexType:(unsigned long long)arg2 aspectRatio:(id)arg3 ;
@end

