/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@class CKMentionEntityNode, NSString;

@interface CKMentionAutoCompleteAttribute : NSObject {

	CKMentionEntityNode* _mentionEntityNode;
	NSString* _originalText;
	NSString* _displayText;

}

@property (nonatomic,retain) CKMentionEntityNode * mentionEntityNode;              //@synthesize mentionEntityNode=_mentionEntityNode - In the implementation block
@property (nonatomic,retain) NSString * originalText;                              //@synthesize originalText=_originalText - In the implementation block
@property (nonatomic,retain) NSString * displayText;                               //@synthesize displayText=_displayText - In the implementation block
-(NSString *)originalText;
-(void)setOriginalText:(NSString *)arg1 ;
-(id)initWithMentionEntityNode:(id)arg1 originalText:(id)arg2 displayText:(id)arg3 ;
-(CKMentionEntityNode *)mentionEntityNode;
-(void)setDisplayText:(NSString *)arg1 ;
-(NSString *)displayText;
-(void)setMentionEntityNode:(CKMentionEntityNode *)arg1 ;
@end

