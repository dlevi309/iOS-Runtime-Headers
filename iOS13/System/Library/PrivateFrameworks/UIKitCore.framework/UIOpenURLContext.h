/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSURL, UISceneOpenURLOptions, NSDictionary;

@interface UIOpenURLContext : NSObject {

	NSURL* _URL;
	UISceneOpenURLOptions* _options;

}

@property (nonatomic,copy,readonly) NSDictionary * optionsDictionary; 
@property (nonatomic,copy,readonly) NSDictionary * URLOptionsDictionary; 
@property (nonatomic,copy,readonly) NSURL * URL;                                      //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) UISceneOpenURLOptions * options;                       //@synthesize options=_options - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(UISceneOpenURLOptions *)options;
-(NSURL *)URL;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(NSDictionary *)URLOptionsDictionary;
-(NSDictionary *)optionsDictionary;
@end

