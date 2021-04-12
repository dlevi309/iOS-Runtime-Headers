/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSString, NSData, NSNumber, NSArray, EDAMNoteAttributes, EDAMNoteRestrictions, EDAMNoteLimits;

@interface EDAMNote : FATObject {

	NSString* _guid;
	NSString* _title;
	NSString* _content;
	NSData* _contentHash;
	NSNumber* _contentLength;
	NSNumber* _created;
	NSNumber* _updated;
	NSNumber* _deleted;
	NSNumber* _active;
	NSNumber* _updateSequenceNum;
	NSString* _notebookGuid;
	NSArray* _tagGuids;
	NSArray* _resources;
	EDAMNoteAttributes* _attributes;
	NSArray* _tagNames;
	NSArray* _sharedNotes;
	EDAMNoteRestrictions* _restrictions;
	EDAMNoteLimits* _limits;

}

@property (nonatomic,retain) NSString * guid;                                  //@synthesize guid=_guid - In the implementation block
@property (nonatomic,retain) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * content;                               //@synthesize content=_content - In the implementation block
@property (nonatomic,retain) NSData * contentHash;                             //@synthesize contentHash=_contentHash - In the implementation block
@property (nonatomic,retain) NSNumber * contentLength;                         //@synthesize contentLength=_contentLength - In the implementation block
@property (nonatomic,retain) NSNumber * created;                               //@synthesize created=_created - In the implementation block
@property (nonatomic,retain) NSNumber * updated;                               //@synthesize updated=_updated - In the implementation block
@property (nonatomic,retain) NSNumber * deleted;                               //@synthesize deleted=_deleted - In the implementation block
@property (nonatomic,retain) NSNumber * active;                                //@synthesize active=_active - In the implementation block
@property (nonatomic,retain) NSNumber * updateSequenceNum;                     //@synthesize updateSequenceNum=_updateSequenceNum - In the implementation block
@property (nonatomic,retain) NSString * notebookGuid;                          //@synthesize notebookGuid=_notebookGuid - In the implementation block
@property (nonatomic,retain) NSArray * tagGuids;                               //@synthesize tagGuids=_tagGuids - In the implementation block
@property (nonatomic,retain) NSArray * resources;                              //@synthesize resources=_resources - In the implementation block
@property (nonatomic,retain) EDAMNoteAttributes * attributes;                  //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain) NSArray * tagNames;                               //@synthesize tagNames=_tagNames - In the implementation block
@property (nonatomic,retain) NSArray * sharedNotes;                            //@synthesize sharedNotes=_sharedNotes - In the implementation block
@property (nonatomic,retain) EDAMNoteRestrictions * restrictions;              //@synthesize restrictions=_restrictions - In the implementation block
@property (nonatomic,retain) EDAMNoteLimits * limits;                          //@synthesize limits=_limits - In the implementation block
+(id)structName;
+(id)structFields;
-(EDAMNoteAttributes *)attributes;
-(void)setAttributes:(EDAMNoteAttributes *)arg1 ;
-(void)setActive:(NSNumber *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSNumber *)deleted;
-(EDAMNoteRestrictions *)restrictions;
-(void)setRestrictions:(EDAMNoteRestrictions *)arg1 ;
-(NSArray *)tagNames;
-(void)setTagNames:(NSArray *)arg1 ;
-(NSNumber *)active;
-(NSString *)content;
-(void)setContent:(NSString *)arg1 ;
-(NSNumber *)created;
-(void)setCreated:(NSNumber *)arg1 ;
-(NSNumber *)contentLength;
-(NSArray *)resources;
-(void)setResources:(NSArray *)arg1 ;
-(void)setDeleted:(NSNumber *)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(NSString *)guid;
-(void)setContentLength:(NSNumber *)arg1 ;
-(NSNumber *)updated;
-(void)setUpdated:(NSNumber *)arg1 ;
-(EDAMNoteLimits *)limits;
-(NSData *)contentHash;
-(void)setContentHash:(NSData *)arg1 ;
-(NSNumber *)updateSequenceNum;
-(void)setUpdateSequenceNum:(NSNumber *)arg1 ;
-(NSString *)notebookGuid;
-(void)setNotebookGuid:(NSString *)arg1 ;
-(NSArray *)tagGuids;
-(void)setTagGuids:(NSArray *)arg1 ;
-(NSArray *)sharedNotes;
-(void)setSharedNotes:(NSArray *)arg1 ;
-(void)setLimits:(EDAMNoteLimits *)arg1 ;
@end

