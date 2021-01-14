/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphPropertylessNode.h>
#import <libobjc.A.dylib/PGGraphGenre.h>

@class NSString;

@interface PGGraphMusicGenreNode : PGGraphPropertylessNode <PGGraphGenre> {

	NSString* _label;

}

@property (nonatomic,readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithLabel:(id)arg1 ;
-(unsigned short)domain;
-(NSString *)name;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(id)label;
@end

