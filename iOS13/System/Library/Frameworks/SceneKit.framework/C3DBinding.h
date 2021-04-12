/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


@class NSString, NSDictionary;

@interface C3DBinding : NSObject {

	id sourceObject;
	NSString* keyPathSrc;
	NSString* keyPathDst;
	NSDictionary* options;

}

@property (nonatomic,retain) id sourceObject; 
@property (nonatomic,retain) NSString * keyPathSrc; 
@property (nonatomic,retain) NSString * keyPathDst; 
@property (nonatomic,retain) NSDictionary * options; 
-(void)dealloc;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(id)sourceObject;
-(void)setSourceObject:(id)arg1 ;
-(void)setKeyPathDst:(NSString *)arg1 ;
-(void)setKeyPathSrc:(NSString *)arg1 ;
-(NSString *)keyPathSrc;
-(NSString *)keyPathDst;
@end

