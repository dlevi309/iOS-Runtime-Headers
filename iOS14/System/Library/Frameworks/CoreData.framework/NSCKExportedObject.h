/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setChangeType:(long long)arg1 ;
-(long long)changeType;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
@end

