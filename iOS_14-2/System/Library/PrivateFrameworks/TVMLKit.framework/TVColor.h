/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIColor *)color;
-(id)initWithColor:(id)arg1 ;
-(IKColor *)ikColor;
-(NSArray *)gradientColors;
-(long long)colorType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)gradientPoints;
@end

