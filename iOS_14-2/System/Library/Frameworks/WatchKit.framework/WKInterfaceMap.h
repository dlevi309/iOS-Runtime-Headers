/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
*/

#import <WatchKit/WatchKit-Structs.h>
#import <WatchKit/WKInterfaceObject.h>

@interface WKInterfaceMap : WKInterfaceObject
-(void)setRegion:(SCD_Struct_WK7)arg1 ;
-(void)setVisibleMapRect:(SCD_Struct_WK8)arg1 ;
-(void)addAnnotation:(CLLocationCoordinate2D)arg1 withImage:(id)arg2 centerOffset:(CGPoint)arg3 ;
-(void)addAnnotation:(CLLocationCoordinate2D)arg1 withImageNamed:(id)arg2 centerOffset:(CGPoint)arg3 ;
-(void)addAnnotation:(CLLocationCoordinate2D)arg1 withPinColor:(long long)arg2 ;
-(void)removeAllAnnotations;
@end

