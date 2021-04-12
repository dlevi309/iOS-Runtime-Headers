/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)bytes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)setBytes:(unsigned long long)arg1 ;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 color:(id)arg3 bytes:(long long)arg4 ;
@end

