/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScoreBoard.framework/ScoreBoard
*/

#import <ScoreBoard/ScoreBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol SCRSyncTargetContextProvider, SCRAsyncTargetContextProvider;
@class NSString;

@interface SCRTaskTargetConfiguration : NSObject <NSCopying, BSDescriptionProviding> {

	NSString* _targetIdentifier;
	id<SCRSyncTargetContextProvider> _syncContextProvider;
	id<SCRAsyncTargetContextProvider> _asyncContextProvider;

}

@property (nonatomic,copy,readonly) NSString * targetIdentifier;                                    //@synthesize targetIdentifier=_targetIdentifier - In the implementation block
@property (nonatomic,readonly) id<SCRSyncTargetContextProvider> syncContextProvider;                //@synthesize syncContextProvider=_syncContextProvider - In the implementation block
@property (nonatomic,readonly) id<SCRAsyncTargetContextProvider> asyncContextProvider;              //@synthesize asyncContextProvider=_asyncContextProvider - In the implementation block
@property (nonatomic,readonly) id<SCRTargetContextProvider> contextProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(void)createContextWithCompletion:(/*^block*/id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id<SCRTargetContextProvider>)contextProvider;
-(NSString *)description;
-(void)_validateContext:(id)arg1 ;
-(id)initWithTarget:(id)arg1 contextProvider:(id)arg2 ;
-(id<SCRSyncTargetContextProvider>)syncContextProvider;
-(id)initWithTarget:(id)arg1 asyncContextProvider:(id)arg2 ;
-(unsigned long long)hash;
-(id<SCRAsyncTargetContextProvider>)asyncContextProvider;
-(void)invalidateTargetContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)targetIdentifier;
-(id)_initWithTarget:(id)arg1 syncProvider:(id)arg2 asyncProvider:(id)arg3 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)initWithTarget:(id)arg1 syncContextProvider:(id)arg2 ;
-(id)_expectedTargetContextProtocol;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)_expectedTargetContextClass;
-(BOOL)isEqual:(id)arg1 ;
@end

