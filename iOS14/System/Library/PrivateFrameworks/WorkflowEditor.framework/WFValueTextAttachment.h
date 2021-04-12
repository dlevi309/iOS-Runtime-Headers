/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIFoundation/NSTextAttachment.h>

@class NSAttributedString, NSString, NSDictionary;

@interface WFValueTextAttachment : NSTextAttachment {

	BOOL _selected;
	BOOL _requiresRedraw;
	NSAttributedString* _displayString;
	NSString* _stringValue;
	NSDictionary* _attributes;
	double _cornerRadius;

}

@property (nonatomic,readonly) NSAttributedString * displayString;              //@synthesize displayString=_displayString - In the implementation block
@property (assign,nonatomic) BOOL requiresRedraw;                               //@synthesize requiresRedraw=_requiresRedraw - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets textInsets; 
@property (nonatomic,readonly) UIEdgeInsets borderInsets; 
@property (assign,nonatomic) double cornerRadius;                               //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,retain) NSString * stringValue;                            //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,retain) id value; 
@property (nonatomic,readonly) NSString * valueName; 
@property (assign,nonatomic) BOOL selected;                                     //@synthesize selected=_selected - In the implementation block
@property (nonatomic,retain) NSDictionary * attributes;                         //@synthesize attributes=_attributes - In the implementation block
+(id)humanReadableStringFromValueTextAttributedString:(id)arg1 ;
-(CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4 ;
-(NSAttributedString *)displayString;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(NSString *)stringValue;
-(void)setSelected:(BOOL)arg1 ;
-(id)imageForBounds:(CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3 ;
-(BOOL)selected;
-(double)cornerRadius;
-(void)setValue:(id)arg1 ;
-(NSDictionary *)attributes;
-(void)setStringValue:(NSString *)arg1 ;
-(UIEdgeInsets)textInsets;
-(void)setCornerRadius:(double)arg1 ;
-(id)initWithData:(id)arg1 ofType:(id)arg2 ;
-(id)value;
-(UIEdgeInsets)borderInsets;
-(BOOL)requiresRedraw;
-(void)setRequiresRedraw:(BOOL)arg1 ;
-(NSString *)valueName;
@end

