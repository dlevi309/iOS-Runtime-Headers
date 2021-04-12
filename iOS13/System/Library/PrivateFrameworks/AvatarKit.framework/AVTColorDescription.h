/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSDictionary *)color;
-(id)initWithDescription:(id)arg1 ;
-(id)colors;
-(NSDictionary *)variationsMin;
-(NSDictionary *)variationsMax;
@end

