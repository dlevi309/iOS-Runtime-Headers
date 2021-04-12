/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, BKSDisplayRenderOverlayDescriptor, NSURL;

@interface SBRestartTransitionRequest : NSObject <BSDescriptionProviding, NSCopying> {

	NSString* _requester;
	NSString* _reason;
	int _restartType;
	double _delay;
	BOOL _wantsPersistentSnapshot;
	BKSDisplayRenderOverlayDescriptor* _customOverlayDescriptor;
	NSURL* _applicationLaunchURL;

}

@property (nonatomic,copy) NSString * requester;                                                     //@synthesize requester=_requester - In the implementation block
@property (nonatomic,copy) NSString * reason;                                                        //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) int restartType;                                                        //@synthesize restartType=_restartType - In the implementation block
@property (assign,nonatomic) double delay;                                                           //@synthesize delay=_delay - In the implementation block
@property (assign,nonatomic) BOOL wantsPersistentSnapshot;                                           //@synthesize wantsPersistentSnapshot=_wantsPersistentSnapshot - In the implementation block
@property (nonatomic,copy) BKSDisplayRenderOverlayDescriptor * customOverlayDescriptor;              //@synthesize customOverlayDescriptor=_customOverlayDescriptor - In the implementation block
@property (nonatomic,copy) NSURL * applicationLaunchURL;                                             //@synthesize applicationLaunchURL=_applicationLaunchURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)reason;
-(double)delay;
-(void)setDelay:(double)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSURL *)applicationLaunchURL;
-(NSString *)requester;
-(void)setRequester:(NSString *)arg1 ;
-(int)restartType;
-(void)setRestartType:(int)arg1 ;
-(id)initWithRequester:(id)arg1 reason:(id)arg2 ;
-(void)setWantsPersistentSnapshot:(BOOL)arg1 ;
-(void)setCustomOverlayDescriptor:(BKSDisplayRenderOverlayDescriptor *)arg1 ;
-(BOOL)wantsPersistentSnapshot;
-(BKSDisplayRenderOverlayDescriptor *)customOverlayDescriptor;
-(void)setApplicationLaunchURL:(NSURL *)arg1 ;
@end

