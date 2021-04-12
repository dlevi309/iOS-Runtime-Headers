/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)uuid;
-()rect;
-(CLKUIAtlas *)atlas;
-(unsigned long long)status;
-(void)dealloc;
-(id)initWithAtlas:(id)arg1 ;
@end

