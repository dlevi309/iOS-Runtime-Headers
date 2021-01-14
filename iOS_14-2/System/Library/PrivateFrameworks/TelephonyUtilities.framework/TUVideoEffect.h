/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)name;
-(UIImage *)thumbnailImage;
-(id)initWithName:(id)arg1 thumbnailImage:(id)arg2 ;
-(unsigned long long)hash;
-(BOOL)isEqualToEffect:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

