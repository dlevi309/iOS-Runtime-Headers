/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)succinctDescription;
-(id)init;
-(NSString *)requester;
-(void)setDelay:(double)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setRequester:(NSString *)arg1 ;
-(NSString *)description;
-(double)delay;
-(NSString *)reason;
-(NSURL *)applicationLaunchURL;
-(void)setApplicationLaunchURL:(NSURL *)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)setReason:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRequester:(id)arg1 reason:(id)arg2 ;
-(void)setRestartType:(int)arg1 ;
-(void)setWantsPersistentSnapshot:(BOOL)arg1 ;
-(void)setCustomOverlayDescriptor:(BKSDisplayRenderOverlayDescriptor *)arg1 ;
-(int)restartType;
-(BOOL)wantsPersistentSnapshot;
-(BKSDisplayRenderOverlayDescriptor *)customOverlayDescriptor;
@end

