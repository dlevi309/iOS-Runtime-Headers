/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <NotesShared/ICAttachmentModel.h>

@class NSString, NSDate;

@interface ICAttachmentAudioModel : ICAttachmentModel {

	BOOL _recordedInNotes;
	NSString* _title;
	NSDate* _creationDate;

}

@property (assign,nonatomic) BOOL recordedInNotes;              //@synthesize recordedInNotes=_recordedInNotes - In the implementation block
@property (nonatomic,copy) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSDate * creationDate;               //@synthesize creationDate=_creationDate - In the implementation block
+(id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(id)initWithAttachment:(id)arg1 ;
-(void)updateFileBasedAttributes;
-(BOOL)recordedInNotes;
-(void)setRecordedInNotes:(BOOL)arg1 ;
@end

