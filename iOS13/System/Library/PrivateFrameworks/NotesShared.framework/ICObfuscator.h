/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


#import <NotesShared/NotesShared-Structs.h>
@class ICRandomTextGenerator, NSMutableDictionary;

@interface ICObfuscator : NSObject {

	ICRandomTextGenerator* _randomTextGenerator;
	NSMutableDictionary* _imageMap;

}

@property (nonatomic,retain) ICRandomTextGenerator * randomTextGenerator;              //@synthesize randomTextGenerator=_randomTextGenerator - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * imageMap;                           //@synthesize imageMap=_imageMap - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setImageMap:(NSMutableDictionary *)arg1 ;
-(void)setRandomTextGenerator:(ICRandomTextGenerator *)arg1 ;
-(NSMutableDictionary *)imageMap;
-(id)obfuscatedStringOfLength:(unsigned long long)arg1 ;
-(ICRandomTextGenerator *)randomTextGenerator;
-(id)obfuscateString:(id)arg1 ;
-(id)obfuscatedImageOfSize:(CGSize)arg1 ;
@end

