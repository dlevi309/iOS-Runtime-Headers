/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSkipMorphTargets:(BOOL)arg1 ;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(BOOL)skipMorphTargets;
-(void)dealloc;
@end

