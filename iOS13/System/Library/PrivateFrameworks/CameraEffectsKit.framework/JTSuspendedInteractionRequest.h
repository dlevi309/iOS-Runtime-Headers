/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@class NSString, NSArray;

@interface JTSuspendedInteractionRequest : NSObject {

	NSString* _tag;
	NSArray* _excludedChildViewControllers;

}

@property (nonatomic,retain) NSString * tag;                                      //@synthesize tag=_tag - In the implementation block
@property (nonatomic,retain) NSArray * excludedChildViewControllers;              //@synthesize excludedChildViewControllers=_excludedChildViewControllers - In the implementation block
+(id)requestWithTag:(id)arg1 excludedViewControllers:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)tag;
-(void)setTag:(NSString *)arg1 ;
-(void)setExcludedChildViewControllers:(NSArray *)arg1 ;
-(NSArray *)excludedChildViewControllers;
@end

