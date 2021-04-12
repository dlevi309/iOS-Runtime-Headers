/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

