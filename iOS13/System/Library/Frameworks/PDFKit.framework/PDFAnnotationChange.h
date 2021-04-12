/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/


@class PDFAnnotationChangePrivate, PDFAnnotation;

@interface PDFAnnotationChange : NSObject {

	PDFAnnotationChangePrivate* _private;

}

@property (nonatomic,readonly) int changeType; 
@property (nonatomic,retain,readonly) PDFAnnotation * annotation; 
@property (nonatomic,readonly) unsigned long long changeTimestamp; 
-(id)description;
-(int)changeType;
-(PDFAnnotation *)annotation;
-(unsigned long long)changeTimestamp;
-(id)initWithAddedAnnotation:(id)arg1 ;
-(id)initWithChangedAnnotation:(id)arg1 ;
-(id)initWithRemovedAnnotation:(id)arg1 ;
-(id)initWithReorderedAnnotation:(id)arg1 ;
-(id)initWithReorderedAndChangedAnnotation:(id)arg1 ;
@end

