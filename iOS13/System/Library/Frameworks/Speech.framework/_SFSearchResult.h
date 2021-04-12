/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Speech.framework/Speech
*/


@class NSHTTPURLResponse, NSData;

@interface _SFSearchResult : NSObject {

	NSHTTPURLResponse* _response;
	NSData* _data;
	long long _searchType;

}

@property (nonatomic,readonly) NSHTTPURLResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) NSData * data;                             //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) long long searchType;                      //@synthesize searchType=_searchType - In the implementation block
-(id)description;
-(NSData *)data;
-(NSHTTPURLResponse *)response;
-(long long)searchType;
-(id)initWithVoiceSearchResult:(id)arg1 ;
@end

