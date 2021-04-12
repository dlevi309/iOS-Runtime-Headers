/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSMutableDictionary *)imageMap;
-(void)setImageMap:(NSMutableDictionary *)arg1 ;
-(void)setRandomTextGenerator:(ICRandomTextGenerator *)arg1 ;
-(id)obfuscatedStringOfLength:(unsigned long long)arg1 ;
-(ICRandomTextGenerator *)randomTextGenerator;
-(id)obfuscateString:(id)arg1 ;
-(id)obfuscatedImageOfSize:(CGSize)arg1 ;
-(void)dealloc;
@end

