/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Home/HFItem.h>
#import <libobjc.A.dylib/HFHomeKitItemProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMOutgoingHomeInvitation, NSString;

@interface HFOutgoingHomeInvitationItem : HFItem <HFHomeKitItemProtocol, NSCopying> {

	HMOutgoingHomeInvitation* _outgoingInvitation;

}

@property (nonatomic,readonly) HMOutgoingHomeInvitation * outgoingInvitation;              //@synthesize outgoingInvitation=_outgoingInvitation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<HFHomeKitObject>)homeKitObject;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(HMOutgoingHomeInvitation *)outgoingInvitation;
-(id)initWithOutgoingInvitation:(id)arg1 ;
@end

