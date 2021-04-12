/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
*/

#import <TipsDaemon/TipsDaemon-Structs.h>
#import <TipsCore/TPSSerializableObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TPSDeliveryPrecondition;

@interface TPSDeliveryNotification : TPSSerializableObject <NSCopying> {

	BOOL _suppress;
	BOOL _overrideOptOut;
	TPSDeliveryPrecondition* _precondition;

}

@property (assign,nonatomic) BOOL suppress;                                       //@synthesize suppress=_suppress - In the implementation block
@property (assign,nonatomic) BOOL overrideOptOut;                                 //@synthesize overrideOptOut=_overrideOptOut - In the implementation block
@property (nonatomic,retain) TPSDeliveryPrecondition * precondition;              //@synthesize precondition=_precondition - In the implementation block
+(id)notificationFromDictionary:(id)arg1 ;
-(BOOL)suppress;
-(id)debugDescription;
-(id)initWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSuppress:(BOOL)arg1 ;
-(BOOL)overrideOptOut;
-(void)setOverrideOptOut:(BOOL)arg1 ;
-(TPSDeliveryPrecondition *)precondition;
-(void)setPrecondition:(TPSDeliveryPrecondition *)arg1 ;
@end

