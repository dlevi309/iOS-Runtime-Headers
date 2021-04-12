/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)identifier;
-(NSString *)username;
-(NSString *)alternateDSID;
-(id)initWithAccount:(id)arg1 ;
-(NSArray *)attributeDescriptions;
@end

