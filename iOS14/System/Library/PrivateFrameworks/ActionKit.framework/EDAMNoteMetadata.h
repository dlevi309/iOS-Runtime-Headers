/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSString, NSNumber, NSArray, EDAMNoteAttributes;

@interface EDAMNoteMetadata : FATObject {

	NSString* _guid;
	NSString* _title;
	NSNumber* _contentLength;
	NSNumber* _created;
	NSNumber* _updated;
	NSNumber* _deleted;
	NSNumber* _updateSequenceNum;
	NSString* _notebookGuid;
	NSArray* _tagGuids;
	EDAMNoteAttributes* _attributes;
	NSString* _largestResourceMime;
	NSNumber* _largestResourceSize;

}

@property (nonatomic,retain) NSString * guid;                              //@synthesize guid=_guid - In the implementation block
@property (nonatomic,retain) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSNumber * contentLength;                     //@synthesize contentLength=_contentLength - In the implementation block
@property (nonatomic,retain) NSNumber * created;                           //@synthesize created=_created - In the implementation block
@property (nonatomic,retain) NSNumber * updated;                           //@synthesize updated=_updated - In the implementation block
@property (nonatomic,retain) NSNumber * deleted;                           //@synthesize deleted=_deleted - In the implementation block
@property (nonatomic,retain) NSNumber * updateSequenceNum;                 //@synthesize updateSequenceNum=_updateSequenceNum - In the implementation block
@property (nonatomic,retain) NSString * notebookGuid;                      //@synthesize notebookGuid=_notebookGuid - In the implementation block
@property (nonatomic,retain) NSArray * tagGuids;                           //@synthesize tagGuids=_tagGuids - In the implementation block
@property (nonatomic,retain) EDAMNoteAttributes * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain) NSString * largestResourceMime;               //@synthesize largestResourceMime=_largestResourceMime - In the implementation block
@property (nonatomic,retain) NSNumber * largestResourceSize;               //@synthesize largestResourceSize=_largestResourceSize - In the implementation block
+(id)structName;
+(id)structFields;
-(NSNumber *)contentLength;
-(NSString *)guid;
-(void)setAttributes:(EDAMNoteAttributes *)arg1 ;
-(void)setCreated:(NSNumber *)arg1 ;
-(NSNumber *)created;
-(void)setTitle:(NSString *)arg1 ;
-(NSNumber *)deleted;
-(EDAMNoteAttributes *)attributes;
-(NSNumber *)updated;
-(void)setContentLength:(NSNumber *)arg1 ;
-(void)setUpdated:(NSNumber *)arg1 ;
-(void)setDeleted:(NSNumber *)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(NSString *)title;
-(NSNumber *)updateSequenceNum;
-(void)setUpdateSequenceNum:(NSNumber *)arg1 ;
-(NSString *)notebookGuid;
-(void)setNotebookGuid:(NSString *)arg1 ;
-(NSArray *)tagGuids;
-(void)setTagGuids:(NSArray *)arg1 ;
-(NSString *)largestResourceMime;
-(void)setLargestResourceMime:(NSString *)arg1 ;
-(NSNumber *)largestResourceSize;
-(void)setLargestResourceSize:(NSNumber *)arg1 ;
@end

