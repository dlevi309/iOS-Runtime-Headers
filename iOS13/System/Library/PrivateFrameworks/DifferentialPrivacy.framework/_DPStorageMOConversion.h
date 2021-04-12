/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

