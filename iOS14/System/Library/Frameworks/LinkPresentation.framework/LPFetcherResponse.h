/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/


@interface LPFetcherResponse : NSObject {

	long long _state;
	id _userData;

}

@property (nonatomic,readonly) long long state;                 //@synthesize state=_state - In the implementation block
@property (nonatomic,retain,readonly) id userData;              //@synthesize userData=_userData - In the implementation block
-(id)initWithState:(long long)arg1 fetcher:(id)arg2 ;
-(id)userData;
-(long long)state;
@end

