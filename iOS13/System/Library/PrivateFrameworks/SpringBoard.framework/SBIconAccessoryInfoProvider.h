/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class NSString;


@protocol SBIconAccessoryInfoProvider <NSObject>
@property (nonatomic,copy,readonly) NSString * location; 
@property (getter=isHighlighted,nonatomic,readonly) BOOL highlighted; 
@property (nonatomic,readonly) long long continuityBadgeType; 
@required
-(NSString *)location;
-(BOOL)isHighlighted;
-(long long)continuityBadgeType;

@end

