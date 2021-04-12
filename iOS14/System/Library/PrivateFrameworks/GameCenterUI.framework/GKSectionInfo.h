/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/


@class NSPredicate, NSArray, NSString;

@interface GKSectionInfo : NSObject {

	long long _section;
	NSPredicate* _predicate;
	NSArray* _sortDescriptors;
	NSArray* _items;
	NSString* _title;

}

@property (assign,nonatomic) long long section;                      //@synthesize section=_section - In the implementation block
@property (nonatomic,retain) NSPredicate * predicate;                //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain) NSArray * sortDescriptors;              //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (nonatomic,retain) NSArray * items;                        //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSString * title;                       //@synthesize title=_title - In the implementation block
-(void)setSection:(long long)arg1 ;
-(NSPredicate *)predicate;
-(void)setItems:(NSArray *)arg1 ;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(long long)section;
-(void)setTitle:(NSString *)arg1 ;
-(NSArray *)items;
-(NSArray *)sortDescriptors;
-(id)description;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(NSString *)title;
-(void)dealloc;
@end

