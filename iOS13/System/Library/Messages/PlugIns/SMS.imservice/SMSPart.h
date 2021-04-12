/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Messages/PlugIns/SMS.imservice/SMS
*/


@class NSMutableArray, NSArray;

@interface SMSPart : NSObject {

	NSMutableArray* _textParts;
	NSMutableArray* _attachmentParts;

}

@property (nonatomic,retain,readonly) NSArray * textParts;                    //@synthesize textParts=_textParts - In the implementation block
@property (nonatomic,retain,readonly) NSArray * attachmentParts;              //@synthesize attachmentParts=_attachmentParts - In the implementation block
-(void)dealloc;
-(NSArray *)attachmentParts;
-(NSArray *)textParts;
-(void)addAttachmentPart:(id)arg1 ;
-(void)addTextPart:(id)arg1 ;
@end

