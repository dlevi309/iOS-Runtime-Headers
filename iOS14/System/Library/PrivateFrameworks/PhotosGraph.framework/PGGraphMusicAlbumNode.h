/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphOptimizedNode.h>

@class NSString;

@interface PGGraphMusicAlbumNode : PGGraphOptimizedNode {

	NSString* _title;

}

@property (nonatomic,readonly) NSString * title;              //@synthesize title=_title - In the implementation block
-(id)init;
-(unsigned short)domain;
-(id)description;
-(void)setLocalProperties:(id)arg1 ;
-(id)propertyDictionary;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(id)label;
-(NSString *)title;
-(BOOL)hasProperties:(id)arg1 ;
@end

