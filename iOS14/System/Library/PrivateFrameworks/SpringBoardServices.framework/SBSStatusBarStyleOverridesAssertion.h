/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class SBSStatusBarStyleOverridesAssertionData, NSString;

@interface SBSStatusBarStyleOverridesAssertion : NSObject <BSDescriptionProviding> {

	SBSStatusBarStyleOverridesAssertionData* _assertionData;
	/*^block*/id _invalidationHandler;

}

@property (nonatomic,retain) SBSStatusBarStyleOverridesAssertionData * assertionData;              //@synthesize assertionData=_assertionData - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                                 //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,readonly) int statusBarStyleOverrides; 
@property (nonatomic,readonly) int pid; 
@property (getter=isExclusive,nonatomic,readonly) BOOL exclusive; 
@property (nonatomic,readonly) BOOL showsWhenForeground; 
@property (nonatomic,copy) NSString * statusString; 
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)assertionWithStatusBarStyleOverrides:(int)arg1 forPID:(int)arg2 exclusive:(BOOL)arg3 showsWhenForeground:(BOOL)arg4 ;
+(id)backgroundLocationAssertionForPID:(int)arg1 ;
-(id)succinctDescription;
-(int)pid;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)uniqueIdentifier;
-(BOOL)isExclusive;
-(NSString *)description;
-(NSString *)statusString;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(int)statusBarStyleOverrides;
-(id)succinctDescriptionBuilder;
-(SBSStatusBarStyleOverridesAssertionData *)assertionData;
-(BOOL)showsWhenForeground;
-(id)initWithStatusBarStyleOverrides:(int)arg1 forPID:(int)arg2 exclusive:(BOOL)arg3 showsWhenForeground:(BOOL)arg4 ;
-(id)initWithStatusBarStyleOverridesAssertionData:(id)arg1 ;
-(void)acquireWithHandler:(/*^block*/id)arg1 invalidationHandler:(/*^block*/id)arg2 ;
-(void)setAssertionData:(SBSStatusBarStyleOverridesAssertionData *)arg1 ;
-(void)acquireWithHandler:(/*^block*/id)arg1 onQueue:(id)arg2 ;
-(id)invalidationHandler;
-(void)setStatusString:(NSString *)arg1 ;
-(void)dealloc;
@end

