/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXEdgeSpacing.h>

@class NSString;

@interface SXAutoPlacementMargin : NSObject <SXEdgeSpacing> {

	SXConvertibleValue _top;
	SXConvertibleValue _right;
	SXConvertibleValue _bottom;
	SXConvertibleValue _left;

}

@property (nonatomic,readonly) SXConvertibleValue left;                //@synthesize left=_left - In the implementation block
@property (nonatomic,readonly) SXConvertibleValue right;               //@synthesize right=_right - In the implementation block
@property (nonatomic,readonly) SXConvertibleValue top;                 //@synthesize top=_top - In the implementation block
@property (nonatomic,readonly) SXConvertibleValue bottom;              //@synthesize bottom=_bottom - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXConvertibleValue)left;
-(SXConvertibleValue)right;
-(SXConvertibleValue)bottom;
-(SXConvertibleValue)top;
-(id)initWithTop:(SXConvertibleValue)arg1 bottom:(SXConvertibleValue)arg2 ;
@end

