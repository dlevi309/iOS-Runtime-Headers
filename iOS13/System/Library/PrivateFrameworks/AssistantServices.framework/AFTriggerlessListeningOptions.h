/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AFTriggerlessListeningOptions : NSObject <NSSecureCoding, NSCopying> {

	BOOL _showUIDuringListening;
	BOOL _playAlertBeforeListening;
	double _endpointDelay;

}

@property (assign,nonatomic) BOOL showUIDuringListening;                 //@synthesize showUIDuringListening=_showUIDuringListening - In the implementation block
@property (assign,nonatomic) BOOL playAlertBeforeListening;              //@synthesize playAlertBeforeListening=_playAlertBeforeListening - In the implementation block
@property (nonatomic,readonly) BOOL showUIBeforeListening; 
@property (nonatomic,readonly) BOOL beepBeforeListening; 
@property (nonatomic,readonly) double delay; 
@property (nonatomic,readonly) double endpointDelay;                     //@synthesize endpointDelay=_endpointDelay - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)delay;
-(void)setShowUIDuringListening:(BOOL)arg1 ;
-(void)setPlayAlertBeforeListening:(BOOL)arg1 ;
-(id)_initWithShowUIDuringListening:(BOOL)arg1 playAlertBeforeListening:(BOOL)arg2 ;
-(BOOL)showUIBeforeListening;
-(BOOL)beepBeforeListening;
-(BOOL)showUIDuringListening;
-(BOOL)playAlertBeforeListening;
-(double)endpointDelay;
@end

