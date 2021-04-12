/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

