/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXJSONObject.h>

@class NSString;

@interface SXMapItem : SXJSONObject

@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,readonly) NSString * label; 
@property (nonatomic,readonly) long long type; 
-(long long)type;
-(NSString *)label;
-(CLLocationCoordinate2D)coordinate;
@end

