/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/


@class NSMutableDictionary;

@interface ADActionViewControllerManager : NSObject {

	NSMutableDictionary* _servingAdSpaces;

}

@property (nonatomic,retain) NSMutableDictionary * servingAdSpaces;              //@synthesize servingAdSpaces=_servingAdSpaces - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)actionViewController:(id)arg1 dismissForIdentifier:(id)arg2 ;
-(void)requestActionViewControllerForAdSpace:(id)arg1 ;
-(void)cancelRequestForActionViewControllerForAdSpace:(id)arg1 ;
-(NSMutableDictionary *)servingAdSpaces;
-(void)setServingAdSpaces:(NSMutableDictionary *)arg1 ;
@end

