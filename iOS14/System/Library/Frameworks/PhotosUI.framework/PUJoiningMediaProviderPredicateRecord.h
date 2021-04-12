/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@class PUMediaProvider;

@interface PUJoiningMediaProviderPredicateRecord : NSObject {

	PUMediaProvider* _mediaProvider;
	/*^block*/id _predicate;

}

@property (nonatomic,readonly) PUMediaProvider * mediaProvider;              //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (nonatomic,copy,readonly) id predicate;                            //@synthesize predicate=_predicate - In the implementation block
-(PUMediaProvider *)mediaProvider;
-(id)predicate;
-(id)initWithMediaProvider:(id)arg1 predicate:(/*^block*/id)arg2 ;
@end

