/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/


@class PDFAnnotationChangePrivate, PDFAnnotation;

@interface PDFAnnotationChange : NSObject {

	PDFAnnotationChangePrivate* _private;

}

@property (nonatomic,readonly) int changeType; 
@property (nonatomic,retain,readonly) PDFAnnotation * annotation; 
@property (nonatomic,readonly) unsigned long long changeTimestamp; 
-(PDFAnnotation *)annotation;
-(int)changeType;
-(id)description;
-(unsigned long long)changeTimestamp;
-(id)initWithAddedAnnotation:(id)arg1 ;
-(id)initWithChangedAnnotation:(id)arg1 ;
-(id)initWithRemovedAnnotation:(id)arg1 ;
-(id)initWithReorderedAnnotation:(id)arg1 ;
-(id)initWithReorderedAndChangedAnnotation:(id)arg1 ;
@end

