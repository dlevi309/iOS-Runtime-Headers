/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDictionary *)URLOptionsDictionary;
-(UISceneOpenURLOptions *)options;
-(id)description;
-(NSDictionary *)optionsDictionary;
-(NSURL *)URL;
-(unsigned long long)hash;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

