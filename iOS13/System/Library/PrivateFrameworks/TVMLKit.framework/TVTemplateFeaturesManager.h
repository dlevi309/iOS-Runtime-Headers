/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)popContext:(id)arg1 forFeature:(id)arg2 ;
-(void)pushContext:(id)arg1 forFeature:(id)arg2 ;
-(id)currentContextForFeature:(id)arg1 ;
-(id)_contextsForFeature:(id)arg1 ;
-(long long)_rankForContext:(id)arg1 ;
@end

