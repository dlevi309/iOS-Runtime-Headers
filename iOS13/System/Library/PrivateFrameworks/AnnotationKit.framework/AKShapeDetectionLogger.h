/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/


@interface AKShapeDetectionLogger : NSObject
+(void)initialize;
+(id)sharedInstance;
-(void)logCHDrawingToDisk:(id)arg1 withIntendedShape:(long long)arg2 ;
-(void)openFinderWindowToLogs;
-(BOOL)_loggingIsEnabled;
-(id)_newLogPathWithShapeName:(id)arg1 ;
-(id)_logsPath;
-(id)_fileName:(id)arg1 ;
@end

