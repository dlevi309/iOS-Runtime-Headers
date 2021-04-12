/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTypingAttributes:(id)arg1;
-(NSDictionary *)typingAttributes;
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

