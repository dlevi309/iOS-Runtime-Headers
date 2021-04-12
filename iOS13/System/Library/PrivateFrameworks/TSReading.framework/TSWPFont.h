/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@class NSString;

@interface TSWPFont : NSObject {

	NSString* _fontName;
	NSString* _compatibilityName;
	NSString* _displayName;
	NSString* _familyName;
	unsigned long long _hash;

}

@property (nonatomic,copy) NSString * fontName;                       //@synthesize fontName=_fontName - In the implementation block
@property (nonatomic,copy) NSString * compatibilityName;              //@synthesize compatibilityName=_compatibilityName - In the implementation block
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSString * familyName; 
+(id)fontWithName:(id)arg1 ;
+(id)fontWithName:(id)arg1 compatibilityName:(id)arg2 ;
+(BOOL)isKeyValueProxyLeafType;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)familyName;
-(NSString *)displayName;
-(NSString *)fontName;
-(void)setFontName:(NSString *)arg1 ;
-(NSString *)compatibilityName;
-(id)initWithFontName:(id)arg1 compatibilityName:(id)arg2 ;
-(void)setCompatibilityName:(NSString *)arg1 ;
-(id)initWithFontName:(id)arg1 ;
@end

