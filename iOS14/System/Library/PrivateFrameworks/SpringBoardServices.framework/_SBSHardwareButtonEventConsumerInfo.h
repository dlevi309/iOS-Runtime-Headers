/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol SBSHardwareButtonEventConsuming;
@class SBSHardwareButtonService, NSString;

@interface _SBSHardwareButtonEventConsumerInfo : NSObject <BSInvalidatable> {

	BOOL _valid;
	SBSHardwareButtonService* _service;
	id<SBSHardwareButtonEventConsuming> _consumer;
	long long _buttonKind;
	unsigned long long _eventMask;
	long long _eventPriority;

}

@property (assign,getter=isValid,nonatomic) BOOL valid;                                 //@synthesize valid=_valid - In the implementation block
@property (assign,nonatomic,__weak) SBSHardwareButtonService * service;                 //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) id<SBSHardwareButtonEventConsuming> consumer;              //@synthesize consumer=_consumer - In the implementation block
@property (assign,nonatomic) long long buttonKind;                                      //@synthesize buttonKind=_buttonKind - In the implementation block
@property (assign,nonatomic) unsigned long long eventMask;                              //@synthesize eventMask=_eventMask - In the implementation block
@property (assign,nonatomic) long long eventPriority;                                   //@synthesize eventPriority=_eventPriority - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)infoWithConsumer:(id)arg1 ;
-(void)setValid:(BOOL)arg1 ;
-(unsigned long long)eventMask;
-(NSString *)description;
-(BOOL)isValid;
-(void)setService:(SBSHardwareButtonService *)arg1 ;
-(void)invalidate;
-(id<SBSHardwareButtonEventConsuming>)consumer;
-(void)setEventMask:(unsigned long long)arg1 ;
-(long long)buttonKind;
-(void)setButtonKind:(long long)arg1 ;
-(long long)eventPriority;
-(void)setEventPriority:(long long)arg1 ;
-(void)setConsumer:(id<SBSHardwareButtonEventConsuming>)arg1 ;
-(SBSHardwareButtonService *)service;
-(void)dealloc;
@end

