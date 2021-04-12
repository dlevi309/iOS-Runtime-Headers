/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <libobjc.A.dylib/HUColorWheelSpace.h>

@class NSString;

@interface HUWheelColorWheelSpace : NSObject <HUColorWheelSpace>

@property (nonatomic,readonly) unsigned long long type; 
@property (assign,nonatomic) unsigned long long mirroringBiasAxis; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)type;
-(UIEdgeInsets)colorForCoordinate:(CGPoint)arg1 ;
-(CGPoint)coordinateForColor:(UIEdgeInsets)arg1 isValid:(out BOOL*)arg2 ;
@end

