/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class NSArray;


@protocol SBIconModelApplicationDataSource <NSObject>
@property (nonatomic,copy,readonly) NSArray * allApplications; 
@required
-(NSArray *)allApplications;
-(id)iconModel:(id)arg1 applicationWithBundleIdentifier:(id)arg2;
-(id)placeholdersByDisplayIDForIconModel:(id)arg1;

@end

