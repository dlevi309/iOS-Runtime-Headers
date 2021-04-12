/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <Memories/MovieCompositionItem.h>

@class NSString;

@interface TitleAudioCompositionItem : MovieCompositionItem {

	NSString* _baseFilename;

}

@property (nonatomic,retain) NSString * baseFilename;              //@synthesize baseFilename=_baseFilename - In the implementation block
-(NSString *)baseFilename;
-(void)setBaseFilename:(NSString *)arg1 ;
-(id)speedRangesForSourceRange:(SCD_Struct_PM9)arg1 destinationRange:(SCD_Struct_PM9)arg2 ;
-(id)initWithClip:(id)arg1 themeID:(id)arg2 ;
-(void)switchToAsset:(int)arg1 ;
-(BOOL)hasSeparateInOut;
@end

