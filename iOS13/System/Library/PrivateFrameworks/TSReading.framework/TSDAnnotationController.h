/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@class NSString;

@interface TSDAnnotationController : NSObject

@property (nonatomic,readonly) BOOL hasAnnotations; 
@property (nonatomic,readonly) NSString * annotationNavigationString; 
@property (assign,nonatomic) BOOL textSelectionChangeShouldDismissAnnotations; 
-(void)registerDelegate:(id)arg1 ;
-(void)unregisterDelegate:(id)arg1 ;
-(BOOL)hasAnnotations;
-(void)nextAnnotation:(id)arg1 ;
-(void)previousAnnotation:(id)arg1 ;
-(id)annotationNavigationTypeStringUsedForNavigating:(BOOL)arg1 ;
-(NSString *)annotationNavigationString;
-(void)setTextSelectionChangeShouldDismissAnnotations:(BOOL)arg1 ;
-(BOOL)textSelectionChangeShouldDismissAnnotations;
-(void)willShowAnnotation:(id)arg1 ;
-(void)didShowAnnotation:(id)arg1 ;
-(void)commitCommentText:(id)arg1 forAnnotation:(id)arg2 ;
@end

