/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
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
-(NSString *)stringValue;
-(NSDictionary *)attributes;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(void)setStringValue:(NSString *)arg1 ;
-(id)imageForBounds:(CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3 ;
-(CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4 ;
-(id)initWithData:(id)arg1 ofType:(id)arg2 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(double)cornerRadius;
-(BOOL)selected;
-(NSAttributedString *)displayString;
-(UIEdgeInsets)textInsets;
-(UIEdgeInsets)borderInsets;
-(NSString *)valueName;
-(void)setRequiresRedraw:(BOOL)arg1 ;
-(BOOL)requiresRedraw;
@end

