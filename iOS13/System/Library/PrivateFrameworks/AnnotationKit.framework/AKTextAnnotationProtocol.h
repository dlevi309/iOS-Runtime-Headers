/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

@class NSTextStorage, NSDictionary;


@protocol AKTextAnnotationProtocol <NSObject>
@property (retain) NSTextStorage * annotationText; 
@property (copy) NSDictionary * typingAttributes; 
@property (assign) BOOL isEditingText; 
@property (assign) BOOL textIsFixedWidth; 
@property (assign) BOOL textIsFixedHeight; 
@property (assign) BOOL textIsClipped; 
@property (assign) BOOL shouldUsePlaceholderText; 
@required
-(NSDictionary *)typingAttributes;
-(void)setTypingAttributes:(id)arg1;
-(NSTextStorage *)annotationText;
-(void)setAnnotationText:(id)arg1;
-(BOOL)isEditingText;
-(void)setIsEditingText:(BOOL)arg1;
-(BOOL)textIsFixedWidth;
-(void)setTextIsFixedWidth:(BOOL)arg1;
-(BOOL)textIsFixedHeight;
-(void)setTextIsFixedHeight:(BOOL)arg1;
-(BOOL)textIsClipped;
-(void)setTextIsClipped:(BOOL)arg1;
-(BOOL)shouldUsePlaceholderText;
-(void)setShouldUsePlaceholderText:(BOOL)arg1;

@end

