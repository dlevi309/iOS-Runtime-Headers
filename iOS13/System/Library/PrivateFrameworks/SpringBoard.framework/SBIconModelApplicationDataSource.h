/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

