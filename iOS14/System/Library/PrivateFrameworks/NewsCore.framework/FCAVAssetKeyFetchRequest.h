/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class AVContentKeySession, NSMutableSet, NSMutableArray;

@interface FCAVAssetKeyFetchRequest : NSObject {

	BOOL _forceRefresh;
	AVContentKeySession* _contentKeySession;
	NSMutableSet* _remainingKeyURIs;
	NSMutableArray* _errorsEncountered;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) AVContentKeySession * contentKeySession;              //@synthesize contentKeySession=_contentKeySession - In the implementation block
@property (nonatomic,readonly) NSMutableSet * remainingKeyURIs;                      //@synthesize remainingKeyURIs=_remainingKeyURIs - In the implementation block
@property (nonatomic,readonly) BOOL forceRefresh;                                    //@synthesize forceRefresh=_forceRefresh - In the implementation block
@property (nonatomic,readonly) NSMutableArray * errorsEncountered;                   //@synthesize errorsEncountered=_errorsEncountered - In the implementation block
@property (nonatomic,copy,readonly) id completionHandler;                            //@synthesize completionHandler=_completionHandler - In the implementation block
-(id)completionHandler;
-(NSMutableSet *)remainingKeyURIs;
-(id)initWithContentKeySession:(id)arg1 keyURIs:(id)arg2 forceRefresh:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSMutableArray *)errorsEncountered;
-(AVContentKeySession *)contentKeySession;
-(BOOL)forceRefresh;
@end

