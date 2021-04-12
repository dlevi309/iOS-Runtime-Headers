/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, NSCKExportOperation;

@interface NSCKExportedObject : NSManagedObject

@property (nonatomic,retain) NSNumber * changeTypeNum; 
@property (nonatomic,retain) NSNumber * typeNum; 
@property (nonatomic,retain) NSString * ckRecordName; 
@property (nonatomic,retain) NSString * zoneName; 
@property (assign,nonatomic) long long changeType; 
@property (assign,nonatomic) unsigned long long type; 
@property (nonatomic,retain) NSCKExportOperation * operation; 
+(id)entityPath;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(long long)changeType;
-(void)setChangeType:(long long)arg1 ;
@end

