/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithList:(id)arg1 ;
-(void)setList:(REMList *)arg1 ;
-(NSArray *)sharees;
-(REMSharee *)sharedOwner;
-(id)shareesExcludingOwner;
@end

