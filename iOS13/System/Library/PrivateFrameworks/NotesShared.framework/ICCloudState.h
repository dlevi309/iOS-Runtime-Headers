/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, ICCloudSyncingObject;

@interface ICCloudState : NSManagedObject

@property (assign,nonatomic) BOOL inCloud; 
@property (assign,nonatomic) long long latestVersionSyncedToCloud; 
@property (assign,nonatomic) long long currentLocalVersion; 
@property (nonatomic,retain) NSDate * localVersionDate; 
@property (nonatomic,retain) ICCloudSyncingObject * cloudSyncingObject; 
-(BOOL)isInCloud;
@end

