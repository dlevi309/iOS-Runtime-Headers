/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INSpeakableString, INNoteContent;


@protocol INCreateNoteIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INSpeakableString * title; 
@property (nonatomic,copy) INNoteContent * content; 
@property (nonatomic,copy) INSpeakableString * groupName; 
@required
-(INNoteContent *)content;
-(id)init;
-(void)setContent:(id)arg1;
-(void)setGroupName:(id)arg1;
-(INSpeakableString *)groupName;
-(void)setTitle:(id)arg1;
-(INSpeakableString *)title;

@end

