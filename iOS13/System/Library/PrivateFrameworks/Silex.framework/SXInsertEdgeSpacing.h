/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXEdgeSpacing.h>

@class NSString;

@interface SXInsertEdgeSpacing : NSObject <SXEdgeSpacing> {

	SXConvertibleValue _top;
	SXConvertibleValue _right;
	SXConvertibleValue _bottom;
	SXConvertibleValue _left;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SXConvertibleValue left;                //@synthesize left=_left - In the implementation block
@property (nonatomic,readonly) SXConvertibleValue right;               //@synthesize right=_right - In the implementation block
@property (nonatomic,readonly) SXConvertibleValue top;                 //@synthesize top=_top - In the implementation block
@property (nonatomic,readonly) SXConvertibleValue bottom;              //@synthesize bottom=_bottom - In the implementation block
-(SXConvertibleValue)left;
-(SXConvertibleValue)top;
-(SXConvertibleValue)bottom;
-(SXConvertibleValue)right;
-(id)initWithTop:(SXConvertibleValue)arg1 bottom:(SXConvertibleValue)arg2 ;
@end

