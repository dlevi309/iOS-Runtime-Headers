/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@class REMSharee, REMList, NSArray;

@interface REMListShareeContext : NSObject {

	REMSharee* _sharedOwner;
	REMList* _list;

}

@property (nonatomic,retain) REMList * list;                         //@synthesize list=_list - In the implementation block
@property (nonatomic,readonly) NSArray * sharees; 
@property (nonatomic,readonly) REMSharee * sharedOwner;              //@synthesize sharedOwner=_sharedOwner - In the implementation block
-(REMList *)list;
-(NSArray *)sharees;
-(void)setList:(REMList *)arg1 ;
-(id)initWithList:(id)arg1 ;
-(REMSharee *)sharedOwner;
-(id)shareesExcludingOwner;
@end

