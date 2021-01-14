/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <libobjc.A.dylib/_GCUpdatableIPCObjectDescription.h>

@protocol NSCopyingNSObjectNSSecureCoding;
@class NSArray, GCController, NSString;

@interface _GCControllerDescription : NSObject <_GCUpdatableIPCObjectDescription> {

	id<NSCopying><NSObject><NSSecureCoding> _identifier;
	NSArray* _componentDescriptions;
	GCController* _materializedController;

}

@property (nonatomic,readonly) id<NSCopying><NSObject><NSSecureCoding> identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(NSString *)description;
-(unsigned long long)hash;
-(BOOL)isEqualToDescription:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<NSCopying><NSObject><NSSecureCoding>)identifier;
-(id)redactedDescription;
-(BOOL)isEqual:(id)arg1 ;
-(id)materializeWithContext:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 components:(id)arg2 ;
-(BOOL)update:(id)arg1 withContext:(id)arg2 ;
@end

