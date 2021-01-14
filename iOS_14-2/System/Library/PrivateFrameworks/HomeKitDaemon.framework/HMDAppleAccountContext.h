/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFObject.h>

@class NSString, NSArray;

@interface HMDAppleAccountContext : HMFObject <HMFObject> {

	NSString* _identifier;
	NSString* _username;
	NSString* _alternateDSID;

}

@property (copy,readonly) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSString * username;                                    //@synthesize username=_username - In the implementation block
@property (copy,readonly) NSString * alternateDSID;                               //@synthesize alternateDSID=_alternateDSID - In the implementation block
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)alternateDSID;
-(NSString *)username;
-(NSArray *)attributeDescriptions;
-(unsigned long long)hash;
-(NSString *)identifier;
-(id)initWithAccount:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

