/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/


@class NSString, NSCountedSet;

@interface AKStatistics : NSObject {

	NSString* _documentType;
	NSString* _clientPrefix;
	NSCountedSet* _annotationsCounts;

}

@property (nonatomic,retain) NSCountedSet * annotationsCounts;              //@synthesize annotationsCounts=_annotationsCounts - In the implementation block
@property (nonatomic,retain) NSString * documentType;                       //@synthesize documentType=_documentType - In the implementation block
@property (nonatomic,retain) NSString * clientPrefix;                       //@synthesize clientPrefix=_clientPrefix - In the implementation block
+(id)nameForAnnotation:(id)arg1 ;
+(id)nameForClassName:(id)arg1 ;
-(NSString *)documentType;
-(void)setDocumentType:(NSString *)arg1 ;
-(void)logShapeDetectionHUDShown;
-(void)logShapeDetectionHUDPickedShape:(id)arg1 ;
-(void)logInkAnnotationStrokeAdded:(id)arg1 ;
-(void)setClientPrefix:(NSString *)arg1 ;
-(void)resetLogging;
-(void)logDocumentSaved;
-(void)setAnnotationsCounts:(NSCountedSet *)arg1 ;
-(NSCountedSet *)annotationsCounts;
-(NSString *)clientPrefix;
-(void)logAnnotationAdded:(id)arg1 ;
@end

