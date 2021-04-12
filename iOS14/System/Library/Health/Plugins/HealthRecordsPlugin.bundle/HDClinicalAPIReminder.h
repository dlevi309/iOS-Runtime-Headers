/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_setCreationDate:(id)arg1 ;
-(NSDate *)creationDate;
-(BOOL)isEqualToReminder:(id)arg1 ;
-(id)_init;
-(void)_setSource:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(HKSource *)source;
-(void)_setPostDate:(id)arg1 ;
-(NSDate *)postDate;
-(id)initWithSource:(id)arg1 creationDate:(id)arg2 postDate:(id)arg3 ;
-(BOOL)wasPosted;
@end

