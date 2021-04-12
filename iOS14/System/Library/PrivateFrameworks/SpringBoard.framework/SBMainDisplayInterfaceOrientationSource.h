/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class NSString;


@protocol SBMainDisplayInterfaceOrientationSource <NSObject>
@property (nonatomic,readonly) long long activeInterfaceOrientation; 
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (nonatomic,readonly) double orientationSourceLevel; 
@property (nonatomic,copy,readonly) NSString * orientationSourceDescription; 
@optional
-(NSString *)orientationSourceDescription;

@required
-(long long)activeInterfaceOrientation;
-(BOOL)isActive;
-(double)orientationSourceLevel;

@end

