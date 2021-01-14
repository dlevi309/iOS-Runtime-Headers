/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

