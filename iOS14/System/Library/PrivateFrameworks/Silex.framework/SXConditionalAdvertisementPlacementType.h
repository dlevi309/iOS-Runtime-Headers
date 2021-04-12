/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXAdvertisementPlacementType.h>
#import <libobjc.A.dylib/SXConditional.h>

@class SXJSONArray, NSString;

@interface SXConditionalAdvertisementPlacementType : SXAdvertisementPlacementType <SXConditional>

@property (nonatomic,readonly) SXJSONArray * conditions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(/*^block*/id)valueClassBlockForPropertyWithName:(id)arg1 ;
-(SXJSONArray *)conditions;
@end

