/*
* Generated on Thursday, January 14, 2021 at 2:29:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProximityControl.framework/ProximityControl
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PCHomeKitIdentifier, NSUserActivity;

@interface PCDisambiguationContext : NSObject <NSSecureCoding> {

	PCHomeKitIdentifier* _identifier;
	long long _interactionDirection;
	NSUserActivity* _activity;

}

@property (nonatomic,readonly) PCHomeKitIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long interactionDirection;                //@synthesize interactionDirection=_interactionDirection - In the implementation block
@property (nonatomic,readonly) NSUserActivity * activity;                     //@synthesize activity=_activity - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)interactionDirection;
-(NSUserActivity *)activity;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PCHomeKitIdentifier *)identifier;
@end

