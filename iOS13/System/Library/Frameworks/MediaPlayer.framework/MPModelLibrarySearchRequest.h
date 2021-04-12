/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
-(NSArray *)scopes;
-(void)setScopes:(NSArray *)arg1 ;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(long long)maximumResultsPerScope;
-(void)setMaximumResultsPerScope:(long long)arg1 ;
@end

