/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSNumber *)state;
-(void)setState:(NSNumber *)arg1 ;
-(EDAMIdentity *)identity;
-(void)setIdentity:(EDAMIdentity *)arg1 ;
-(void)setStateChanged:(NSNumber *)arg1 ;
-(NSNumber *)stateChanged;
@end

