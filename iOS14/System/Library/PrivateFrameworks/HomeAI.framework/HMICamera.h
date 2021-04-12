/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString;

@interface HMICamera : HMFObject <HMFLogging, NSSecureCoding> {

	NSUUID* _identifier;
	NSString* _manufacturer;
	NSString* _model;
	NSString* _name;

}

@property (readonly) NSUUID * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (readonly) NSString * manufacturer;                       //@synthesize manufacturer=_manufacturer - In the implementation block
@property (readonly) NSString * model;                              //@synthesize model=_model - In the implementation block
@property (readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
-(NSString *)model;
-(NSString *)manufacturer;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)attributeDescriptions;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 manufacturer:(id)arg3 model:(id)arg4 ;
@end

