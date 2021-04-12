/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
*/


@class CLKUIAtlas, NSString;

@interface CLKUITexture : NSObject {

	CLKUIAtlas* _atlas;
	 _rect;

}

@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) CLKUIAtlas * atlas;                     //@synthesize atlas=_atlas - In the implementation block
@property (nonatomic,readonly) unsigned long long status; 
@property (nonatomic,readonly)  rect;                                  //@synthesize rect=_rect - In the implementation block
+(id)textureWithProviderDelegate:(id)arg1 uuid:(id)arg2 ;
+(id)textureWithProviderDelegate:(id)arg1 uuid:(id)arg2 ;
-(void)dealloc;
-(NSString *)uuid;
-(unsigned long long)status;
-()rect;
-(CLKUIAtlas *)atlas;
-(id)initWithAtlas:(id)arg1 ;
@end

