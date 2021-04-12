/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IKColor, UIColor, NSArray;

@interface TVColor : NSObject <NSCopying> {

	IKColor* _ikColor;

}

@property (nonatomic,__weak,readonly) IKColor * ikColor;              //@synthesize ikColor=_ikColor - In the implementation block
@property (nonatomic,readonly) long long colorType; 
@property (nonatomic,readonly) UIColor * color; 
@property (nonatomic,readonly) NSArray * gradientColors; 
@property (nonatomic,readonly) NSArray * gradientPoints; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)color;
-(id)initWithColor:(id)arg1 ;
-(NSArray *)gradientColors;
-(long long)colorType;
-(IKColor *)ikColor;
-(NSArray *)gradientPoints;
@end

