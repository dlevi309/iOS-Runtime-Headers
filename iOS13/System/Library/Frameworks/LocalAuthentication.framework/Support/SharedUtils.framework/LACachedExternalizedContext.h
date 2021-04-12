/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/SharedUtils
*/


@protocol LAContextExternalizationProt, LAContextExternalizationObserverProt;
@class NSData;

@interface LACachedExternalizedContext : NSObject {

	id<LAContextExternalizationProt> _externalizationDelegate;
	NSData* _cachedExternalizedContext;
	id<LAContextExternalizationObserverProt> _externalizationObserver;

}

@property (nonatomic,retain) NSData * cachedExternalizedContext;                                                   //@synthesize cachedExternalizedContext=_cachedExternalizedContext - In the implementation block
@property (nonatomic,readonly) NSData * externalizedContext; 
@property (assign,nonatomic,__weak) id<LAContextExternalizationObserverProt> externalizationObserver;              //@synthesize externalizationObserver=_externalizationObserver - In the implementation block
-(id)initWithExternalizedContext:(id)arg1 ;
-(NSData *)externalizedContext;
-(id)initWithExternalizationDelegate:(id)arg1 ;
-(NSData *)cachedExternalizedContext;
-(void)setCachedExternalizedContext:(NSData *)arg1 ;
-(void)externalizedContextWithReply:(/*^block*/id)arg1 ;
-(id)externalizedContextWithError:(id*)arg1 ;
-(id<LAContextExternalizationObserverProt>)externalizationObserver;
-(void)setExternalizationObserver:(id<LAContextExternalizationObserverProt>)arg1 ;
@end

