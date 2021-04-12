/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSDictionary;

@interface VUILocalizationManager : NSObject {

	NSDictionary* _overideLocDict;

}

@property (retain) NSDictionary * overideLocDict;              //@synthesize overideLocDict=_overideLocDict - In the implementation block
+(id)sharedInstance;
-(id)localizedStringForKey:(id)arg1 ;
-(NSDictionary *)overideLocDict;
-(void)setOverideLocDict:(NSDictionary *)arg1 ;
-(id)localizedStringForKey:(id)arg1 withCounts:(id)arg2 ;
-(void)updateWithJSDictionary:(id)arg1 ;
@end

