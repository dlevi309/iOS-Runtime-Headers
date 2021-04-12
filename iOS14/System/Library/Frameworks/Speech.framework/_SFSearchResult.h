/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)searchType;
-(id)description;
-(NSHTTPURLResponse *)response;
-(NSData *)data;
-(id)initWithVoiceSearchResult:(id)arg1 ;
@end

