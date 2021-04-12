/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

