/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphPropertylessNode.h>

@class NSString;

@interface PGGraphMobilityNode : PGGraphPropertylessNode {

	NSString* _label;

}

@property (nonatomic,readonly) unsigned long long mobilityType; 
+(unsigned long long)mobilityTypeForMobilityLabel:(id)arg1 ;
-(id)initWithLabel:(id)arg1 ;
-(unsigned short)domain;
-(unsigned long long)mobilityType;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(id)label;
@end

