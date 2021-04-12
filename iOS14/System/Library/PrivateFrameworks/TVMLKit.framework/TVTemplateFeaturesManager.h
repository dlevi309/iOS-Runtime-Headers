/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/


@protocol TVTemplateFeaturesManagerDelegate;
@class NSMutableDictionary;

@interface TVTemplateFeaturesManager : NSObject {

	NSMutableDictionary* _contextsByFeature;
	id<TVTemplateFeaturesManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TVTemplateFeaturesManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)featuresManagerForAppDocument:(id)arg1 ;
-(id<TVTemplateFeaturesManagerDelegate>)delegate;
-(void)setDelegate:(id<TVTemplateFeaturesManagerDelegate>)arg1 ;
-(void)pushContext:(id)arg1 forFeature:(id)arg2 ;
-(void)popContext:(id)arg1 forFeature:(id)arg2 ;
-(id)currentContextForFeature:(id)arg1 ;
-(id)_contextsForFeature:(id)arg1 ;
-(long long)_rankForContext:(id)arg1 ;
@end

