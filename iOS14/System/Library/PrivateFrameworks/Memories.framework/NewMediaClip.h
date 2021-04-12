/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/KenBurnsClip.h>
#import <libobjc.A.dylib/CompoundClipInformation.h>

@class NSArray, NSString;

@interface NewMediaClip : KenBurnsClip <CompoundClipInformation> {

	NSArray* _containedClips;

}

@property (nonatomic,retain) NSArray * containedClips;              //@synthesize containedClips=_containedClips - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDuration:(int)arg1 ;
-(int)maxDuration;
-(NSArray *)containedClips;
-(void)setContainedClips:(NSArray *)arg1 ;
-(BOOL)expandsEditList;
-(id)newMediaAssetVideoPiece;
-(id)initWithKBClip:(id)arg1 ;
@end

