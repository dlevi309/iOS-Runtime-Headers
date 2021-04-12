/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPModelKind.h>

@class MPModelTVSeasonKind;

@interface MPModelTVShowKind : MPModelKind {

	MPModelTVSeasonKind* _seasonKind;

}

@property (nonatomic,copy,readonly) MPModelTVSeasonKind * seasonKind;              //@synthesize seasonKind=_seasonKind - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)identityKind;
+(id)kindWithSeasonKind:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)humanDescription;
-(void)applyToView:(shared_ptr<mlcore::LibraryView>*)arg1 withContext:(id)arg2 ;
-(shared_ptr<mlcore::Predicate>*)representedSearchScopePredicate;
-(MPModelTVSeasonKind *)seasonKind;
@end

