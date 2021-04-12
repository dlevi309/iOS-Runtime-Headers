/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@class NSString, UIImage;

@interface TUVideoEffect : NSObject {

	NSString* _name;
	UIImage* _thumbnailImage;

}

@property (nonatomic,copy,readonly) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) UIImage * thumbnailImage;              //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(UIImage *)thumbnailImage;
-(id)initWithName:(id)arg1 thumbnailImage:(id)arg2 ;
-(BOOL)isEqualToEffect:(id)arg1 ;
@end

