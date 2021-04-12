/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
*/

@class NSString;


@protocol NADiffOperation <NSObject,NAEquatable>
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,copy,readonly) NSString * operationDescription; 
@required
-(unsigned long long)type;
-(NSString *)operationDescription;

@end

