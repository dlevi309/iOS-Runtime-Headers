/*
* Generated on Thursday, January 14, 2021 at 2:25:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(FBProcess*<FBSProcess>)process;
-(void)setProcess:(FBProcess*<FBSProcess>)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)succinctDescription;
-(NSDictionary *)userInfo;
-(void)setObserver:(id<SBLockScreenPluginLifecycleObserver>)arg1 ;
-(id<SBLockScreenPluginLifecycleObserver>)observer;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)name;
-(NSString *)description;
-(void)setName:(NSString *)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAuxiliaryAnimation:(id)arg1 ;
-(id)auxiliaryAnimation;
@end

