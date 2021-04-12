/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <Memories/MovieCompositionItem.h>

@class NSString;

@interface TitleAudioCompositionItem : MovieCompositionItem {

	NSString* _baseFilename;

}

@property (nonatomic,retain) NSString * baseFilename;              //@synthesize baseFilename=_baseFilename - In the implementation block
-(id)speedRangesForSourceRange:(SCD_Struct_PM6)arg1 destinationRange:(SCD_Struct_PM6)arg2 ;
-(NSString *)baseFilename;
-(void)setBaseFilename:(NSString *)arg1 ;
-(id)initWithClip:(id)arg1 themeID:(id)arg2 ;
-(void)switchToAsset:(int)arg1 ;
-(BOOL)hasSeparateInOut;
@end

