/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
*/

#import <WatchKit/WatchKit-Structs.h>
#import <WatchKit/WKInterfaceObject.h>

@interface WKInterfaceMap : WKInterfaceObject
-(void)setRegion:(SCD_Struct_WK7)arg1 ;
-(void)removeAllAnnotations;
-(void)setVisibleMapRect:(SCD_Struct_WK8)arg1 ;
-(void)addAnnotation:(CLLocationCoordinate2D)arg1 withImage:(id)arg2 centerOffset:(CGPoint)arg3 ;
-(void)addAnnotation:(CLLocationCoordinate2D)arg1 withImageNamed:(id)arg2 centerOffset:(CGPoint)arg3 ;
-(void)addAnnotation:(CLLocationCoordinate2D)arg1 withPinColor:(long long)arg2 ;
@end

