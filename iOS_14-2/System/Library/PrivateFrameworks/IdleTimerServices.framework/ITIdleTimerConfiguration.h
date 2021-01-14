/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IdleTimerServices.framework/IdleTimerServices
*/

#import <IdleTimerServices/IdleTimerServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface ITIdleTimerConfiguration : NSObject <NSCopying, BSXPCSecureCoding, BSDescriptionProviding> {

	BOOL _disablesTimer;
	NSString* _identifier;
	unsigned long long _idleEventMask;
	/*^block*/id _idleEventHandlerBlock;

}

@property (getter=_identifier,nonatomic,copy,readonly) NSString * identifier;                                                     //@synthesize identifier=_identifier - In the implementation block
@property (assign,setter=_setIdleEventMask:,getter=_idleEventMask,nonatomic) unsigned long long idleEventMask;                    //@synthesize idleEventMask=_idleEventMask - In the implementation block
@property (setter=_setIdleEventHandlerBlock:,getter=_idleEventHandlerBlock,nonatomic,copy) id idleEventHandlerBlock;              //@synthesize idleEventHandlerBlock=_idleEventHandlerBlock - In the implementation block
@property (assign,nonatomic) BOOL disablesTimer;                                                                                  //@synthesize disablesTimer=_disablesTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsBSXPCSecureCoding;
+(id)configurationToDisableIdleTimer;
-(id)succinctDescription;
-(/*^block*/id)_idleEventHandlerBlock;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)_uniquedReason:(id)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setDisablesTimer:(BOOL)arg1 ;
-(NSString *)description;
-(id)_identifier;
-(void)_setIdleEventHandlerBlock:(/*^block*/id)arg1 ;
-(void)_setIdleEventMask:(unsigned long long)arg1 ;
-(unsigned long long)_idleEventMask;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(BOOL)disablesTimer;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_copyWithNewIdentifier;
-(id)initWithBSXPCCoder:(id)arg1 ;
@end

