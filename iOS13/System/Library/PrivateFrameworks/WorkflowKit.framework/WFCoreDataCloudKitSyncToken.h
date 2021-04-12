/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/WFRecordStorage.h>

@class NSString, NSDate, NSData;

@interface WFCoreDataCloudKitSyncToken : NSManagedObject <WFRecordStorage>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * account; 
@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,retain) NSData * lastOrderingData; 
@property (nonatomic,retain) NSData * serverChangeTokenData; 
+(id)fetchRequest;
-(id)descriptor;
@end

