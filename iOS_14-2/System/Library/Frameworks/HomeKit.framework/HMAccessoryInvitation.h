/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>

@class NSUUID, HMAccessory, NSString;

@interface HMAccessoryInvitation : NSObject <NSSecureCoding, HMObjectMerge> {

	NSUUID* _identifier;
	HMAccessory* _accessory;
	long long _state;

}

@property (nonatomic,retain) NSUUID * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) HMAccessory * accessory;              //@synthesize accessory=_accessory - In the implementation block
@property (assign,nonatomic) long long state;                             //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSUUID * uniqueIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(HMAccessory *)accessory;
-(id)initWithAccessory:(id)arg1 identifier:(id)arg2 state:(long long)arg3 ;
-(void)setAccessory:(HMAccessory *)arg1 ;
-(void)setState:(long long)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)identifier;
@end

