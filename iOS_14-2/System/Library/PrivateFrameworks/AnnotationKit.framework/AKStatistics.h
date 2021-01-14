/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDocumentType:(NSString *)arg1 ;
-(NSString *)documentType;
-(void)setClientPrefix:(NSString *)arg1 ;
-(NSString *)clientPrefix;
-(void)logShapeDetectionHUDShown;
-(void)logShapeDetectionHUDPickedShape:(id)arg1 ;
-(void)logInkAnnotationStrokeAdded:(id)arg1 ;
-(void)resetLogging;
-(void)logDocumentSaved;
-(void)setAnnotationsCounts:(NSCountedSet *)arg1 ;
-(NSCountedSet *)annotationsCounts;
-(void)_logCoreAnalyticsAction:(id)arg1 ;
-(void)_logCoreAnalyticsHUDPickActionForAnnotationType:(id)arg1 ;
-(void)_logCoreAnalyticsAnnotationCreateActionForAnnotationType:(id)arg1 count:(unsigned long long)arg2 ;
-(void)logAnnotationAdded:(id)arg1 ;
@end

