/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/

#import <SpotlightServices/SPSearchEntity.h>

@class NSString, NSArray;

@interface SPSearchSuggestionEntity : SPSearchEntity {

	NSString* _queryString;
	NSString* _tokenText;
	NSArray* _preferredBundleIDs;

}

@property (nonatomic,retain) NSString * queryString;                    //@synthesize queryString=_queryString - In the implementation block
@property (nonatomic,retain) NSString * tokenText;                      //@synthesize tokenText=_tokenText - In the implementation block
@property (nonatomic,retain) NSArray * preferredBundleIDs;              //@synthesize preferredBundleIDs=_preferredBundleIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)queryString;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setQueryString:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)tokenText;
-(id)initWithQueryString:(id)arg1 tokenText:(id)arg2 preferredBundleIDs:(id)arg3 ;
-(void)setTokenText:(NSString *)arg1 ;
-(NSArray *)preferredBundleIDs;
-(void)setPreferredBundleIDs:(NSArray *)arg1 ;
@end

