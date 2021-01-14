/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class NSString;


@protocol SBIconAccessoryInfoProvider <NSObject>
@property (nonatomic,copy,readonly) NSString * location; 
@property (getter=isHighlighted,nonatomic,readonly) BOOL highlighted; 
@property (nonatomic,readonly) long long continuityBadgeType; 
@required
-(long long)continuityBadgeType;
-(NSString *)location;
-(BOOL)isHighlighted;

@end

