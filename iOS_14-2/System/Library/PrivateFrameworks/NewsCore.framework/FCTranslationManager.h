/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCTranslationManager.h>

@protocol FCTranslationManager
@property (nonatomic,readonly) id<FCTranslationProvider> possiblyUnfetchedTranslationProvider; 
@required
-(id<FCTranslationProvider>)possiblyUnfetchedTranslationProvider;
-(void)fetchTranslationProvider:(/*^block*/id)arg1;

@end


@protocol FCContentContext;
@class FCAsyncSerialQueue, FCTranslationMap;

@interface FCTranslationManager : NSObject <FCTranslationManager> {

	FCAsyncSerialQueue* _queue;
	FCTranslationMap* _translationMap;
	id<FCContentContext> _contentContext;

}

@property (nonatomic,retain) FCAsyncSerialQueue * queue;                                                    //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) FCTranslationMap * translationMap;                                             //@synthesize translationMap=_translationMap - In the implementation block
@property (nonatomic,retain) id<FCContentContext> contentContext;                                           //@synthesize contentContext=_contentContext - In the implementation block
@property (nonatomic,readonly) id<FCTranslationProvider> possiblyUnfetchedTranslationProvider; 
-(void)setContentContext:(id<FCContentContext>)arg1 ;
-(id<FCContentContext>)contentContext;
-(void)setTranslationMap:(FCTranslationMap *)arg1 ;
-(id)initWithContentContext:(id)arg1 ;
-(FCTranslationMap *)translationMap;
-(FCAsyncSerialQueue *)queue;
-(id<FCTranslationProvider>)possiblyUnfetchedTranslationProvider;
-(void)setQueue:(FCAsyncSerialQueue *)arg1 ;
-(void)fetchTranslationProvider:(/*^block*/id)arg1 ;
@end

