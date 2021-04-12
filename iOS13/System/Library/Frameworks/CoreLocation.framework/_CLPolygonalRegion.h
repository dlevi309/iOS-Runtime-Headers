/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
*/

#import <CoreLocation/CLRegion.h>

@class NSArray;

@interface _CLPolygonalRegion : CLRegion

@property (nonatomic,copy,readonly) NSArray * vertices; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)vertices;
-(id)initWithVertices:(id)arg1 identifier:(id)arg2 ;
-(id)initNearbyAllowedWithVertices:(id)arg1 identifier:(id)arg2 ;
@end

