/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/


@class NSString, SBSLockScreenContentAction;

@interface SBSLockScreenContentAssertion : NSObject {

	NSString* _slot;
	NSString* _identifier;
	id _configurationObject;
	SBSLockScreenContentAction* _action;
	/*^block*/id _errorHandler;

}

@property (nonatomic,retain) NSString * slot;                                                          //@synthesize slot=_slot - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) id configurationObject;                                                   //@synthesize configurationObject=_configurationObject - In the implementation block
@property (nonatomic,retain) SBSLockScreenContentAction * action;                                      //@synthesize action=_action - In the implementation block
@property (setter=_setErrorHandler:,getter=_errorHandler,nonatomic,copy) id errorHandler;              //@synthesize errorHandler=_errorHandler - In the implementation block
+(id)acquireContentProviderAssertionForType:(unsigned long long)arg1 slot:(id)arg2 identifier:(id)arg3 errorHandler:(/*^block*/id)arg4 ;
+(id)acquireContentProviderAssertionForType:(unsigned long long)arg1 slot:(id)arg2 identifier:(id)arg3 configurationObject:(id)arg4 errorHandler:(/*^block*/id)arg5 ;
+(BOOL)_isRestrictedDevice;
-(void)_acquireAssertionWithType:(unsigned long long)arg1 slot:(id)arg2 identifier:(id)arg3 configurationObject:(id)arg4 ;
-(SBSLockScreenContentAction *)action;
-(void)setAction:(SBSLockScreenContentAction *)arg1 ;
-(void)setSlot:(NSString *)arg1 ;
-(BOOL)_supportsReacquisition;
-(void)setConfigurationObject:(id)arg1 ;
-(id)configurationObject;
-(unsigned long long)type;
-(void)invalidate;
-(/*^block*/id)_errorHandler;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)_setErrorHandler:(/*^block*/id)arg1 ;
-(NSString *)identifier;
-(id)initWithType:(unsigned long long)arg1 slot:(id)arg2 identifier:(id)arg3 configurationObject:(id)arg4 errorHandler:(/*^block*/id)arg5 ;
-(NSString *)slot;
-(void)dealloc;
@end

