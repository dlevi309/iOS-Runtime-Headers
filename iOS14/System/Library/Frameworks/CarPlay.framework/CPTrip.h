/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class MKMapItem, NSArray, NSUUID;

@interface CPTrip : NSObject <NSSecureCoding> {

	MKMapItem* _origin;
	MKMapItem* _destination;
	NSArray* _routeChoices;
	id _userInfo;
	NSUUID* _identifier;

}

@property (nonatomic,retain) NSUUID * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) MKMapItem * origin;                       //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) MKMapItem * destination;                  //@synthesize destination=_destination - In the implementation block
@property (nonatomic,copy,readonly) NSArray * routeChoices;              //@synthesize routeChoices=_routeChoices - In the implementation block
@property (nonatomic,retain) id userInfo;                                //@synthesize userInfo=_userInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setUserInfo:(id)arg1 ;
-(MKMapItem *)origin;
-(id)userInfo;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)identifier;
-(MKMapItem *)destination;
-(NSArray *)routeChoices;
-(id)initWithOrigin:(id)arg1 destination:(id)arg2 routeChoices:(id)arg3 ;
@end

