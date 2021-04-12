/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSData, NSString, NSURL;

@interface MCFontPayload : MCPayload {

	NSData* _fontData;
	NSString* _name;
	NSURL* _persistentURL;

}

@property (nonatomic,retain) NSData * fontData;                  //@synthesize fontData=_fontData - In the implementation block
@property (nonatomic,retain) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSURL * persistentURL;              //@synthesize persistentURL=_persistentURL - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)title;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(NSURL *)persistentURL;
-(NSData *)fontData;
-(void)setFontData:(NSData *)arg1 ;
-(void)setPersistentURL:(NSURL *)arg1 ;
@end

