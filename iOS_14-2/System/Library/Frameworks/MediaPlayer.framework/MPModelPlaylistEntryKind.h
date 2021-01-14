/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPModelKind.h>

@class NSArray;

@interface MPModelPlaylistEntryKind : MPModelKind {

	NSArray* _kinds;

}

@property (nonatomic,readonly) NSArray * kinds;              //@synthesize kinds=_kinds - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)identityKind;
+(id)kindWithKinds:(id)arg1 ;
-(NSArray *)kinds;
-(void)encodeWithCoder:(id)arg1 ;
-(void)applyToView:(shared_ptr<mlcore::LibraryView>*)arg1 withContext:(id)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)humanDescription;
-(BOOL)isEqual:(id)arg1 ;
@end

