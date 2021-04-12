/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSDictionary, NSNumber;

@interface EDAMNoteCollectionCounts : FATObject {

	NSDictionary* _notebookCounts;
	NSDictionary* _tagCounts;
	NSNumber* _trashCount;

}

@property (nonatomic,retain) NSDictionary * notebookCounts;              //@synthesize notebookCounts=_notebookCounts - In the implementation block
@property (nonatomic,retain) NSDictionary * tagCounts;                   //@synthesize tagCounts=_tagCounts - In the implementation block
@property (nonatomic,retain) NSNumber * trashCount;                      //@synthesize trashCount=_trashCount - In the implementation block
+(id)structName;
+(id)structFields;
-(NSDictionary *)notebookCounts;
-(void)setNotebookCounts:(NSDictionary *)arg1 ;
-(NSDictionary *)tagCounts;
-(void)setTagCounts:(NSDictionary *)arg1 ;
-(NSNumber *)trashCount;
-(void)setTrashCount:(NSNumber *)arg1 ;
@end

