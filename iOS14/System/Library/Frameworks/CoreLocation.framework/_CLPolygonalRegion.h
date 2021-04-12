/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
*/

#import <CoreLocation/CLRegion.h>

@class NSArray;

@interface _CLPolygonalRegion : CLRegion

@property (nonatomic,copy,readonly) NSArray * vertices; 
+(BOOL)supportsSecureCoding;
-(id)initNearbyAllowedWithVertices:(id)arg1 identifier:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithVertices:(id)arg1 identifier:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)vertices;
-(void)dealloc;
@end

