/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <ShareSheet/UIActivity.h>

@interface ICChangeDatesActivity : UIActivity {

	unsigned char _type;
	id _representedObject;

}

@property (nonatomic,retain) id representedObject;              //@synthesize representedObject=_representedObject - In the implementation block
@property (assign,nonatomic) unsigned char type;                //@synthesize type=_type - In the implementation block
+(long long)activityCategory;
-(unsigned char)type;
-(void)setType:(unsigned char)arg1 ;
-(id)activityType;
-(id)representedObject;
-(void)setRepresentedObject:(id)arg1 ;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityViewController;
-(void)setModificationDateForNoteObject:(id)arg1 ;
-(void)setModificationDateForAttachmentObject:(id)arg1 ;
-(void)setCreationDateForNoteObject:(id)arg1 ;
-(void)setCreationDateForAttachmentObject:(id)arg1 ;
-(id)initWithObject:(id)arg1 activityType:(unsigned char)arg2 ;
@end

