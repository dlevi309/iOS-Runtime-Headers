/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphOptimizedNode.h>

@class NSDate, NSSet;

@interface PGGraphMusicSessionNode : PGGraphOptimizedNode {

	NSDate* _localStartDate;
	NSDate* _localEndDate;

}

@property (nonatomic,readonly) NSDate * localStartDate;              //@synthesize localStartDate=_localStartDate - In the implementation block
@property (nonatomic,readonly) NSDate * localEndDate;                //@synthesize localEndDate=_localEndDate - In the implementation block
@property (nonatomic,readonly) NSSet * momentNodes; 
@property (nonatomic,readonly) NSSet * trackNodes; 
+(id)musicSessionDateSortDescriptors;
-(NSDate *)localStartDate;
-(NSDate *)localEndDate;
-(id)init;
-(unsigned short)domain;
-(id)description;
-(void)setLocalProperties:(id)arg1 ;
-(id)propertyDictionary;
-(NSSet *)momentNodes;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(id)label;
-(BOOL)hasProperties:(id)arg1 ;
-(NSSet *)trackNodes;
-(void)enumerateMusicTrackNodesUsingBlock:(/*^block*/id)arg1 ;
@end

