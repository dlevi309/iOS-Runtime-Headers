/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPModelLibraryRequest.h>

@class NSArray, NSString;

@interface MPModelLibrarySearchRequest : MPModelLibraryRequest {

	NSArray* _scopes;
	long long _maximumResultsPerScope;
	NSString* _searchString;

}

@property (nonatomic,copy) NSArray * scopes;                                //@synthesize scopes=_scopes - In the implementation block
@property (assign,nonatomic) long long maximumResultsPerScope;              //@synthesize maximumResultsPerScope=_maximumResultsPerScope - In the implementation block
@property (nonatomic,copy) NSString * searchString;                         //@synthesize searchString=_searchString - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)scopes;
-(void)setScopes:(NSArray *)arg1 ;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)maximumResultsPerScope;
-(void)setMaximumResultsPerScope:(long long)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setSearchString:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)searchString;
@end

