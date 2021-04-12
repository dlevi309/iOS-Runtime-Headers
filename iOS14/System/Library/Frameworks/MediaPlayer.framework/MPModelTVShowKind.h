/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(MPModelTVSeasonKind *)seasonKind;
-(void)applyToView:(shared_ptr<mlcore::LibraryView>*)arg1 withContext:(id)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(shared_ptr<mlcore::Predicate>*)representedSearchScopePredicate;
-(id)humanDescription;
-(BOOL)isEqual:(id)arg1 ;
@end

