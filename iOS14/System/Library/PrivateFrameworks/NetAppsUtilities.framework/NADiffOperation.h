/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
*/

@class NSString;


@protocol NADiffOperation <NSObject,NAEquatable>
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,copy,readonly) NSString * operationDescription; 
@required
-(NSString *)operationDescription;
-(unsigned long long)type;

@end

