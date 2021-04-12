/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCTranslationManager.h>

@protocol FCTranslationManager
@property (nonatomic,readonly) id<FCTranslationProvider> possiblyUnfetchedTranslationProvider; 
@required
-(void)fetchTranslationProvider:(/*^block*/id)arg1;
-(id<FCTranslationProvider>)possiblyUnfetchedTranslationProvider;

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
-(void)setQueue:(FCAsyncSerialQueue *)arg1 ;
-(FCAsyncSerialQueue *)queue;
-(void)fetchTranslationProvider:(/*^block*/id)arg1 ;
-(void)setContentContext:(id<FCContentContext>)arg1 ;
-(id)initWithContentContext:(id)arg1 ;
-(id<FCContentContext>)contentContext;
-(FCTranslationMap *)translationMap;
-(void)setTranslationMap:(FCTranslationMap *)arg1 ;
-(id<FCTranslationProvider>)possiblyUnfetchedTranslationProvider;
@end

