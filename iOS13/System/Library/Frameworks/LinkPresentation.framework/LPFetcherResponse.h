/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/


@interface LPFetcherResponse : NSObject {

	long long _state;
	id _userData;

}

@property (nonatomic,readonly) long long state;                 //@synthesize state=_state - In the implementation block
@property (nonatomic,retain,readonly) id userData;              //@synthesize userData=_userData - In the implementation block
-(long long)state;
-(id)userData;
-(id)initWithState:(long long)arg1 fetcher:(id)arg2 ;
@end

