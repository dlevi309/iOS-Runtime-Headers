/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTag:(NSString *)arg1 ;
-(NSString *)tag;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(void)setExcludedChildViewControllers:(NSArray *)arg1 ;
-(NSArray *)excludedChildViewControllers;
@end

