/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/


@class HKSource, NSDate;

@interface HDClinicalAPIReminder : NSObject {

	HKSource* _source;
	NSDate* _creationDate;
	NSDate* _postDate;

}

@property (nonatomic,copy,readonly) HKSource * source;                    //@synthesize source=_source - In the implementation block
@property (nonatomic,copy,readonly) NSDate * creationDate;                //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * postDate;                    //@synthesize postDate=_postDate - In the implementation block
@property (getter=wasPosted,nonatomic,readonly) BOOL posted; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)_init;
-(HKSource *)source;
-(NSDate *)creationDate;
-(void)_setSource:(id)arg1 ;
-(void)_setCreationDate:(id)arg1 ;
-(BOOL)isEqualToReminder:(id)arg1 ;
-(void)_setPostDate:(id)arg1 ;
-(NSDate *)postDate;
-(id)initWithSource:(id)arg1 creationDate:(id)arg2 postDate:(id)arg3 ;
-(BOOL)wasPosted;
@end

