/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithExternalizationDelegate:(id)arg1 ;
-(id<LAContextExternalizationObserverProt>)externalizationObserver;
-(NSData *)cachedExternalizedContext;
-(void)externalizedContextWithReply:(/*^block*/id)arg1 ;
-(id)initWithExternalizedContext:(id)arg1 ;
-(void)setExternalizationObserver:(id<LAContextExternalizationObserverProt>)arg1 ;
-(NSData *)externalizedContext;
-(void)setCachedExternalizedContext:(NSData *)arg1 ;
-(id)externalizedContextWithError:(id*)arg1 ;
@end

