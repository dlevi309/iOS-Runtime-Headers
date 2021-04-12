/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@class ENNoteRef, ENNotebook, NSString, NSDate;

@interface ENSessionFindNotesResult : NSObject {

	BOOL _hasResources;
	int _updateSequenceNum;
	ENNoteRef* _noteRef;
	ENNotebook* _notebook;
	NSString* _title;
	NSDate* _created;
	NSDate* _updated;

}

@property (assign,nonatomic) int updateSequenceNum;              //@synthesize updateSequenceNum=_updateSequenceNum - In the implementation block
@property (nonatomic,retain) ENNoteRef * noteRef;                //@synthesize noteRef=_noteRef - In the implementation block
@property (nonatomic,retain) ENNotebook * notebook;              //@synthesize notebook=_notebook - In the implementation block
@property (nonatomic,retain) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSDate * created;                   //@synthesize created=_created - In the implementation block
@property (nonatomic,retain) NSDate * updated;                   //@synthesize updated=_updated - In the implementation block
@property (assign,nonatomic) BOOL hasResources;                  //@synthesize hasResources=_hasResources - In the implementation block
-(id)description;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSDate *)created;
-(void)setCreated:(NSDate *)arg1 ;
-(BOOL)hasResources;
-(NSDate *)updated;
-(void)setUpdated:(NSDate *)arg1 ;
-(int)updateSequenceNum;
-(void)setUpdateSequenceNum:(int)arg1 ;
-(ENNotebook *)notebook;
-(void)setNotebook:(ENNotebook *)arg1 ;
-(ENNoteRef *)noteRef;
-(void)setNoteRef:(ENNoteRef *)arg1 ;
-(void)setHasResources:(BOOL)arg1 ;
@end

