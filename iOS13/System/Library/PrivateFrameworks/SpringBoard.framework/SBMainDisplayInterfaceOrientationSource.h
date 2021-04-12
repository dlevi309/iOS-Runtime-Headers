/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isActive;
-(long long)activeInterfaceOrientation;
-(double)orientationSourceLevel;

@end

