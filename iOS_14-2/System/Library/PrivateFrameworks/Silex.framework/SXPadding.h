/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXJSONObject.h>
#import <libobjc.A.dylib/SXEdgeSpacing.h>

@class NSString;

@interface SXPadding : SXJSONObject <SXEdgeSpacing>

@property (nonatomic,readonly) SXConvertibleValue left; 
@property (nonatomic,readonly) SXConvertibleValue right; 
@property (nonatomic,readonly) SXConvertibleValue top; 
@property (nonatomic,readonly) SXConvertibleValue bottom; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXConvertibleValue)bottom;
-(SXConvertibleValue)top;
-(SXConvertibleValue)right;
-(SXConvertibleValue)left;
@end

