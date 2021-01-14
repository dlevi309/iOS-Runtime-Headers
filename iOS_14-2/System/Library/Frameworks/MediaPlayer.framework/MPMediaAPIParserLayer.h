/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class NSString;

@interface MPMediaAPIParserLayer : NSObject {

	NSString* _key;
	unsigned long long _type;

}

@property (nonatomic,copy) NSString * key;                         //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
+(id)layerWithKey:(id)arg1 ofType:(unsigned long long)arg2 ;
+(id)layerWithFirstObjectOfType:(unsigned long long)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(NSString *)key;
-(unsigned long long)type;
-(void)setKey:(NSString *)arg1 ;
@end

