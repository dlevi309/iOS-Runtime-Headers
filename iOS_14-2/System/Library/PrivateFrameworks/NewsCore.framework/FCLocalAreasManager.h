/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCLocalAreasManager.h>

@protocol FCLocalAreasManager
@property (nonatomic,readonly) id<FCLocalAreasProvider> possiblyUnfetchedLocalAreasProvider; 
@required
-(id<FCLocalAreasProvider>)possiblyUnfetchedLocalAreasProvider;
-(void)fetchLocalAreasProvider:(/*^block*/id)arg1;

@end


@protocol FCContentContext;
@class FCAsyncSerialQueue, FCLocalAreasMapping;

@interface FCLocalAreasManager : NSObject <FCLocalAreasManager> {

	FCAsyncSerialQueue* _queue;
	FCLocalAreasMapping* _localAreasMapping;
	id<FCContentContext> _contentContext;

}

@property (nonatomic,retain) FCAsyncSerialQueue * queue;                                                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) FCLocalAreasMapping * localAreasMapping;                                     //@synthesize localAreasMapping=_localAreasMapping - In the implementation block
@property (nonatomic,retain) id<FCContentContext> contentContext;                                         //@synthesize contentContext=_contentContext - In the implementation block
@property (nonatomic,readonly) id<FCLocalAreasProvider> possiblyUnfetchedLocalAreasProvider; 
-(void)setContentContext:(id<FCContentContext>)arg1 ;
-(id<FCLocalAreasProvider>)possiblyUnfetchedLocalAreasProvider;
-(id<FCContentContext>)contentContext;
-(void)setLocalAreasMapping:(FCLocalAreasMapping *)arg1 ;
-(id)initWithContentContext:(id)arg1 ;
-(FCAsyncSerialQueue *)queue;
-(void)fetchLocalAreasProvider:(/*^block*/id)arg1 ;
-(FCLocalAreasMapping *)localAreasMapping;
-(void)setQueue:(FCAsyncSerialQueue *)arg1 ;
@end

