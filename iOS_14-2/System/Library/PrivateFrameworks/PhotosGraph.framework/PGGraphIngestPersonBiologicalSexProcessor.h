/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGGraphIngestProcessor.h>

@class NSString;

@interface PGGraphIngestPersonBiologicalSexProcessor : NSObject <PGGraphIngestProcessor>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)runWithGraphUpdate:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(BOOL)shouldRunWithGraphUpdate:(id)arg1 ;
-(void)processPersonBiologicalSexForPersonNodes:(id)arg1 graph:(id)arg2 withProgressBlock:(/*^block*/id)arg3 ;
-(void)_writeBiologicalSexByPerson:(id)arg1 toPhotoLibrary:(id)arg2 ;
-(unsigned short)_phBiologicalSexFromIngestBiologicalSex:(unsigned long long)arg1 ;
-(unsigned long long)_sexForPersonNode:(id)arg1 graph:(id)arg2 ;
-(unsigned long long)sexForFaces:(id)arg1 personDescription:(id)arg2 ;
-(id)_sexDescriptionForBiologicalSex:(unsigned long long)arg1 ;
@end

