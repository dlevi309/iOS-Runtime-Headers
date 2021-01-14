/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXJSONObject.h>

@class SXUnitConverter, SXDataTableBorder;

@interface SXDataTableBorderSides : SXJSONObject {

	SXUnitConverter* _unitConverter;

}

@property (nonatomic,readonly) SXDataTableBorder * top; 
@property (nonatomic,readonly) SXDataTableBorder * right; 
@property (nonatomic,readonly) SXDataTableBorder * bottom; 
@property (nonatomic,readonly) SXDataTableBorder * left; 
@property (nonatomic,retain) SXUnitConverter * unitConverter;              //@synthesize unitConverter=_unitConverter - In the implementation block
-(SXDataTableBorder *)left;
-(SXDataTableBorder *)bottom;
-(SXDataTableBorder *)right;
-(SXDataTableBorder *)top;
-(SXUnitConverter *)unitConverter;
-(id)borderForValue:(id)arg1 ;
-(void)setUnitConverter:(SXUnitConverter *)arg1 ;
-(id)topWithValue:(id)arg1 withType:(int)arg2 ;
-(id)rightWithValue:(id)arg1 withType:(int)arg2 ;
-(id)bottomWithValue:(id)arg1 withType:(int)arg2 ;
-(id)leftWithValue:(id)arg1 withType:(int)arg2 ;
@end

