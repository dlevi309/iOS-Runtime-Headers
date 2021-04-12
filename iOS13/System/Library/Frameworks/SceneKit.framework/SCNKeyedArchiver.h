/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <Foundation/NSKeyedArchiver.h>

@class NSDictionary;

@interface SCNKeyedArchiver : NSKeyedArchiver {

	BOOL skipMorphTargets;
	NSDictionary* options;

}

@property (assign,nonatomic) BOOL skipMorphTargets; 
@property (nonatomic,copy) NSDictionary * options; 
+(id)archivedDataWithRootObject:(id)arg1 options:(id)arg2 ;
-(void)dealloc;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(void)setSkipMorphTargets:(BOOL)arg1 ;
-(BOOL)skipMorphTargets;
@end

