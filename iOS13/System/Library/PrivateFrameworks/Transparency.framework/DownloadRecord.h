/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSUUID, NSData;

@interface DownloadRecord : NSManagedObject

@property (nonatomic,copy) NSString * application; 
@property (nonatomic,copy) NSUUID * downloadId; 
@property (assign,nonatomic) double requestTime; 
@property (nonatomic,retain) NSData * response; 
@property (assign,nonatomic) long long startSLHRevision; 
+(id)fetchRequest;
@end

