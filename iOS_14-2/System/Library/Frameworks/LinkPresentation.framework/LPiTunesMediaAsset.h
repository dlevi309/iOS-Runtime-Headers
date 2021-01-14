/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/


@class NSURL, NSDictionary, NSString, LPFetcher;

@interface LPiTunesMediaAsset : NSObject {

	Class _customFetcherClass;
	long long _type;
	NSURL* _URL;
	NSDictionary* _colors;
	NSString* _name;

}

@property (nonatomic,copy,readonly) NSURL * URL;                        //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * colors;              //@synthesize colors=_colors - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain,readonly) LPFetcher * fetcher; 
-(NSDictionary *)colors;
-(LPFetcher *)fetcher;
-(id)initWithVideoURL:(id)arg1 name:(id)arg2 ;
-(id)initWithImageURL:(id)arg1 colors:(id)arg2 name:(id)arg3 ;
-(id)initWithName:(id)arg1 customFetcherClass:(Class)arg2 ;
-(NSString *)name;
-(NSURL *)URL;
-(id)metadata;
@end

