/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSUUID, NSString;

@interface HMDHTTPDevice : HMFObject <HMFLogging> {

	NSUUID* _identifier;

}

@property (nonatomic,copy,readonly) NSUUID * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)shortDescription;
-(id)init;
-(id)shortDescription;
-(NSString *)debugDescription;
-(id)logIdentifier;
-(NSString *)description;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(unsigned long long)hash;
-(NSUUID *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

