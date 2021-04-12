/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class NSSet;

@interface HFAlarmDiff : NSObject {

	NSSet* _updatedAlarms;
	NSSet* _addedAlarms;
	NSSet* _deletedAlarms;
	NSSet* _unmodifiedAlarms;

}

@property (nonatomic,copy) NSSet * updatedAlarms;                 //@synthesize updatedAlarms=_updatedAlarms - In the implementation block
@property (nonatomic,copy) NSSet * addedAlarms;                   //@synthesize addedAlarms=_addedAlarms - In the implementation block
@property (nonatomic,copy) NSSet * deletedAlarms;                 //@synthesize deletedAlarms=_deletedAlarms - In the implementation block
@property (nonatomic,copy) NSSet * unmodifiedAlarms;              //@synthesize unmodifiedAlarms=_unmodifiedAlarms - In the implementation block
@property (nonatomic,readonly) BOOL inputWasEqual; 
+(id)generateAlarmDiffFromSet:(id)arg1 toSet:(id)arg2 ;
-(id)description;
-(void)setUnmodifiedAlarms:(NSSet *)arg1 ;
-(void)setAddedAlarms:(NSSet *)arg1 ;
-(void)setDeletedAlarms:(NSSet *)arg1 ;
-(void)setUpdatedAlarms:(NSSet *)arg1 ;
-(NSSet *)addedAlarms;
-(NSSet *)deletedAlarms;
-(NSSet *)updatedAlarms;
-(NSSet *)unmodifiedAlarms;
-(BOOL)inputWasEqual;
@end

