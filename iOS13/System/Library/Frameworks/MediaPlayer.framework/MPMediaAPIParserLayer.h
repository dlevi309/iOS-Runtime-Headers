/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)key;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(void)setKey:(NSString *)arg1 ;
@end

