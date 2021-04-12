/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphNode.h>
#import <libobjc.A.dylib/PGGraphLocalizable.h>

@class NSString;

@interface PGGraphHolidayNode : PGGraphNode <PGGraphLocalizable>

@property (nonatomic,readonly) unsigned long long category; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * localizedName; 
-(unsigned long long)category;
-(NSString *)localizedName;
-(void)enumerateCelebratingMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateCelebratingHighlightNodesUsingBlock:(/*^block*/id)arg1 ;
@end

