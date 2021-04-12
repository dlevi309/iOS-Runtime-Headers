/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
*/

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol FBSProcess, SBLockScreenPluginLifecycleObserver;
@class NSString, NSDictionary, FBProcess;

@interface SBLockScreenPluginContext : NSObject <BSDescriptionProviding, NSCopying> {

	NSString* _name;
	NSDictionary* _userInfo;
	FBProcess*<FBSProcess> _process;
	/*^block*/id _auxiliaryAnimation;
	id<SBLockScreenPluginLifecycleObserver> _observer;

}

@property (nonatomic,retain) FBProcess*<FBSProcess> process;                                //@synthesize process=_process - In the implementation block
@property (nonatomic,copy) NSString * name;                                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                                         //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) id<SBLockScreenPluginLifecycleObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (nonatomic,copy) id auxiliaryAnimation;                                           //@synthesize auxiliaryAnimation=_auxiliaryAnimation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contextWithName:(id)arg1 ;
-(NSString *)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<SBLockScreenPluginLifecycleObserver>)observer;
-(NSDictionary *)userInfo;
-(void)setName:(NSString *)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setObserver:(id<SBLockScreenPluginLifecycleObserver>)arg1 ;
-(FBProcess*<FBSProcess>)process;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setProcess:(FBProcess*<FBSProcess>)arg1 ;
-(void)setAuxiliaryAnimation:(id)arg1 ;
-(id)auxiliaryAnimation;
@end

