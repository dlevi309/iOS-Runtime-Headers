/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIColor;

@interface LPImageProperties : NSObject <NSCopying> {

	NSString* _accessibilityText;
	long long _type;
	UIColor* _overlaidTextColor;

}

@property (nonatomic,copy) NSString * accessibilityText;               //@synthesize accessibilityText=_accessibilityText - In the implementation block
@property (assign,nonatomic) long long type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) UIColor * overlaidTextColor;              //@synthesize overlaidTextColor=_overlaidTextColor - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(NSString *)accessibilityText;
-(void)setAccessibilityText:(NSString *)arg1 ;
-(UIColor *)overlaidTextColor;
-(void)setOverlaidTextColor:(UIColor *)arg1 ;
@end

