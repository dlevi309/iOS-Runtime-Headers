/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/

@class NSManagedObjectID;


@protocol _DPStorageMOConversion
@property (nonatomic,retain) NSManagedObjectID * objectId; 
@property (assign,nonatomic) BOOL submitted; 
@required
+(id)entityName;
+(id)createRecordFromManagedObject:(id)arg1;
-(id)entityName;
-(BOOL)copyToManagedObject:(id)arg1;
-(NSManagedObjectID *)objectId;
-(void)setObjectId:(id)arg1;
-(BOOL)submitted;
-(BOOL)copyFromManagedObject:(id)arg1;
-(void)setSubmitted:(BOOL)arg1;

@end

