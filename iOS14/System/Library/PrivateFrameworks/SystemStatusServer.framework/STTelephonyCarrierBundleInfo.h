/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SystemStatusServer.framework/SystemStatusServer
*/

#import <SystemStatusServer/SystemStatusServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, NSArray;

@interface STTelephonyCarrierBundleInfo : NSObject <NSCopying, NSMutableCopying, BSDescriptionProviding> {

	BOOL _LTEConnectionShows4G;
	BOOL _reinitiatingActivationDisabled;
	NSString* _customerServicePhoneNumber;
	NSArray* _disabledApplicationIDs;
	NSString* _carrierName;
	NSString* _homeCountryCode;

}

@property (nonatomic,readonly) BOOL LTEConnectionShows4G;                                                                //@synthesize LTEConnectionShows4G=_LTEConnectionShows4G - In the implementation block
@property (getter=isReinitiatingActivationDisabled,nonatomic,readonly) BOOL reinitiatingActivationDisabled;              //@synthesize reinitiatingActivationDisabled=_reinitiatingActivationDisabled - In the implementation block
@property (nonatomic,copy,readonly) NSString * customerServicePhoneNumber;                                               //@synthesize customerServicePhoneNumber=_customerServicePhoneNumber - In the implementation block
@property (nonatomic,copy,readonly) NSArray * disabledApplicationIDs;                                                    //@synthesize disabledApplicationIDs=_disabledApplicationIDs - In the implementation block
@property (nonatomic,copy,readonly) NSString * carrierName;                                                              //@synthesize carrierName=_carrierName - In the implementation block
@property (nonatomic,copy,readonly) NSString * homeCountryCode;                                                          //@synthesize homeCountryCode=_homeCountryCode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(id)init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)carrierName;
-(BOOL)LTEConnectionShows4G;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(NSArray *)disabledApplicationIDs;
-(id)initWithCarrierBundleInfo:(id)arg1 ;
-(NSString *)customerServicePhoneNumber;
-(NSString *)homeCountryCode;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isReinitiatingActivationDisabled;
@end

