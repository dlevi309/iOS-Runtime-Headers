/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/


@protocol FCHeadlineProviding, FCContentContext;
@class NSDictionary;

@interface NUANFLinkedContentLoader : NSObject {

	BOOL _hasLoaded;
	NSDictionary* _linkedHeadlines;
	id<FCHeadlineProviding> _headline;
	id<FCContentContext> _contentContext;

}

@property (nonatomic,readonly) id<FCHeadlineProviding> headline;                 //@synthesize headline=_headline - In the implementation block
@property (nonatomic,readonly) id<FCContentContext> contentContext;              //@synthesize contentContext=_contentContext - In the implementation block
@property (nonatomic,retain) NSDictionary * linkedHeadlines;                     //@synthesize linkedHeadlines=_linkedHeadlines - In the implementation block
@property (nonatomic,readonly) BOOL hasLoaded;                                   //@synthesize hasLoaded=_hasLoaded - In the implementation block
-(id<FCHeadlineProviding>)headline;
-(id<FCContentContext>)contentContext;
-(BOOL)hasLoaded;
-(id)loadLinkedContentWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithHeadline:(id)arg1 contentContext:(id)arg2 ;
-(NSDictionary *)linkedHeadlines;
-(void)setLinkedHeadlines:(NSDictionary *)arg1 ;
@end

