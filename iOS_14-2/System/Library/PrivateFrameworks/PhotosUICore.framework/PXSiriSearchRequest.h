/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface PXSiriSearchRequest : NSObject <NSSecureCoding> {

	NSArray* _queryTokens;

}

@property (nonatomic,retain) NSArray * queryTokens;              //@synthesize queryTokens=_queryTokens - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithSearchForPhotosIntent:(id)arg1 ;
-(id)initWithStartPhotoPlaybackIntent:(id)arg1 ;
-(id)_queryTokensForPhotoAttributeOptions:(unsigned long long)arg1 ;
-(id)_queryTokensForAlbumName:(id)arg1 ;
-(id)_queryTokensForSearchTerms:(id)arg1 searchTermsOperator:(long long)arg2 ;
-(id)_queryTokensForLocationCreated:(id)arg1 ;
-(id)_queryTokensForDateCreated:(id)arg1 ;
-(id)_queryTokensForPeopleInPhoto:(id)arg1 peopleInPhotoOperator:(long long)arg2 ;
-(id)_queryTokensForEvents:(id)arg1 ;
-(id)_queryTokensForPlaces:(id)arg1 ;
-(id)_queryTokensForActivities:(id)arg1 ;
-(id)_queryTokensForGeographicalFeatures:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)queryTokens;
-(void)setQueryTokens:(NSArray *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_useNLDateSearch;
@end

