/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SPFinder.framework/SPFinder
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSError, NSArray, SPSearchResultMarker;

@interface SPBeaconPayloadCacheSearchResult : NSObject <NSSecureCoding> {

	NSError* _error;
	NSArray* _fileURLs;
	SPSearchResultMarker* _searchResultMarker;

}

@property (nonatomic,copy) NSArray * fileURLs;                                       //@synthesize fileURLs=_fileURLs - In the implementation block
@property (nonatomic,retain) SPSearchResultMarker * searchResultMarker;              //@synthesize searchResultMarker=_searchResultMarker - In the implementation block
@property (nonatomic,copy) NSError * error;                                          //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSArray *)fileURLs;
-(void)setFileURLs:(NSArray *)arg1 ;
-(void)setSearchResultMarker:(SPSearchResultMarker *)arg1 ;
-(SPSearchResultMarker *)searchResultMarker;
-(id)initWithFileURLs:(id)arg1 searchResultMarker:(id)arg2 error:(id)arg3 ;
@end

