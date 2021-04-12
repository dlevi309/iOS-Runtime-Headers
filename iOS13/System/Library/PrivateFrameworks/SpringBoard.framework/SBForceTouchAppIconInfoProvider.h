/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBIconAccessoryInfoProvider.h>

@class NSString;

@interface SBForceTouchAppIconInfoProvider : NSObject <SBIconAccessoryInfoProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * location; 
@property (getter=isHighlighted,nonatomic,readonly) BOOL highlighted; 
@property (nonatomic,readonly) long long continuityBadgeType; 
-(NSString *)location;
-(BOOL)isHighlighted;
-(long long)continuityBadgeType;
@end

