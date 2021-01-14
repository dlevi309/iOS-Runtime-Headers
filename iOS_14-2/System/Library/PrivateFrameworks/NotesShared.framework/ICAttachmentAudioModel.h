/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSDate *)creationDate;
-(id)initWithAttachment:(id)arg1 ;
-(BOOL)recordedInNotes;
-(void)setRecordedInNotes:(BOOL)arg1 ;
-(void)updateFileBasedAttributes;
-(NSString *)title;
@end

