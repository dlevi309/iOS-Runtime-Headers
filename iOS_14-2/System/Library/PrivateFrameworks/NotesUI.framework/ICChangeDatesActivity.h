/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)activityType;
-(void)setType:(unsigned char)arg1 ;
-(void)setRepresentedObject:(id)arg1 ;
-(unsigned char)type;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityTitle;
-(id)activityViewController;
-(id)representedObject;
-(void)setModificationDateForNoteObject:(id)arg1 ;
-(void)setModificationDateForAttachmentObject:(id)arg1 ;
-(void)setCreationDateForNoteObject:(id)arg1 ;
-(void)setCreationDateForAttachmentObject:(id)arg1 ;
-(id)initWithObject:(id)arg1 activityType:(unsigned char)arg2 ;
@end

