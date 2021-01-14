/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class EDAMIdentity, NSNumber;

@interface EDAMIdentityForAdmin : FATObject {

	EDAMIdentity* _identity;
	NSNumber* _state;
	NSNumber* _stateChanged;

}

@property (nonatomic,retain) EDAMIdentity * identity;              //@synthesize identity=_identity - In the implementation block
@property (nonatomic,retain) NSNumber * state;                     //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSNumber * stateChanged;              //@synthesize stateChanged=_stateChanged - In the implementation block
+(id)structName;
+(id)structFields;
-(void)setIdentity:(EDAMIdentity *)arg1 ;
-(EDAMIdentity *)identity;
-(void)setState:(NSNumber *)arg1 ;
-(NSNumber *)state;
-(void)setStateChanged:(NSNumber *)arg1 ;
-(NSNumber *)stateChanged;
@end

