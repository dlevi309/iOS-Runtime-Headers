/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXJSONObject.h>
#import <libobjc.A.dylib/SXEdgeSpacing.h>

@class NSString;

@interface SXPadding : SXJSONObject <SXEdgeSpacing>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SXConvertibleValue left; 
@property (nonatomic,readonly) SXConvertibleValue right; 
@property (nonatomic,readonly) SXConvertibleValue top; 
@property (nonatomic,readonly) SXConvertibleValue bottom; 
-(SXConvertibleValue)bottom;
-(SXConvertibleValue)top;
-(SXConvertibleValue)right;
-(SXConvertibleValue)left;
@end

