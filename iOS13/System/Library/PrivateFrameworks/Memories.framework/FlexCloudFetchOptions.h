/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@class NSPredicate, NSArray;

@interface FlexCloudFetchOptions : NSObject {

	BOOL _localOnly;
	NSPredicate* _predicate;
	NSArray* _sortDescriptors;

}

@property (nonatomic,retain) NSPredicate * predicate;                //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain) NSArray * sortDescriptors;              //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (assign,nonatomic) BOOL localOnly;                         //@synthesize localOnly=_localOnly - In the implementation block
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(NSArray *)sortDescriptors;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(BOOL)localOnly;
-(void)setLocalOnly:(BOOL)arg1 ;
@end

