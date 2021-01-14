/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/Preferences-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIColor;

@interface PSCapacityBarCategory : NSObject <NSCopying> {

	unsigned long long _bytes;
	NSString* _identifier;
	NSString* _title;
	UIColor* _color;

}

@property (assign) unsigned long long bytes;              //@synthesize bytes=_bytes - In the implementation block
@property (retain) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSString * title;                      //@synthesize title=_title - In the implementation block
@property (retain) UIColor * color;                       //@synthesize color=_color - In the implementation block
-(UIColor *)color;
-(unsigned long long)bytes;
-(void)setTitle:(NSString *)arg1 ;
-(void)setColor:(UIColor *)arg1 ;
-(void)setBytes:(unsigned long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 color:(id)arg3 bytes:(long long)arg4 ;
@end

