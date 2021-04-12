/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/


@class NSMutableDictionary, NSDictionary;

@interface AVTColorDescription : NSObject {

	NSMutableDictionary* _colors;
	NSMutableDictionary* _variationMin;
	NSMutableDictionary* _variationMax;
	NSDictionary* _color;

}

@property (readonly) NSDictionary * color;                      //@synthesize color=_color - In the implementation block
@property (readonly) NSDictionary * variationsMin; 
@property (readonly) NSDictionary * variationsMax; 
-(id)colors;
-(NSDictionary *)color;
-(id)initWithDescription:(id)arg1 ;
-(NSDictionary *)variationsMin;
-(NSDictionary *)variationsMax;
@end

