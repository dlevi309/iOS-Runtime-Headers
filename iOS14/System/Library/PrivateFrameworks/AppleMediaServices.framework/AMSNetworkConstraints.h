/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/AMSBagConsumer_Project.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@class NSMutableDictionary, NSString;

@interface AMSNetworkConstraints : NSObject <AMSBagConsumer_Project, AMSBagConsumer> {

	NSMutableDictionary* _sizeLimits;

}

@property (nonatomic,retain) NSMutableDictionary * sizeLimits;                               //@synthesize sizeLimits=_sizeLimits - In the implementation block
@property (getter=isAnyNetworkTypeEnabled,readonly) BOOL anyNetworkTypeEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagKeySet;
+(id)bagSubProfile;
+(id)_networkConstraintsForMediaType:(id)arg1 withArray:(id)arg2 ;
+(id)networkConstraintsForMediaType:(id)arg1 withBag:(id)arg2 ;
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
+(id)bagSubProfileVersion;
+(id)createBagForSubProfile;
-(void)_setSizeLimit:(long long)arg1 forNetworkType:(id)arg2 ;
-(id)init;
-(long long)sizeLimitForNetworkType:(id)arg1 ;
-(BOOL)isEqualToConstraints:(id)arg1 ;
-(NSMutableDictionary *)sizeLimits;
-(BOOL)isAnyNetworkTypeEnabled;
-(void)setSizeLimits:(NSMutableDictionary *)arg1 ;
-(id)_initWithStoreConstraintDictionary:(id)arg1 ;
-(NSString *)description;
-(long long)_sizeLimitForNetworkType:(id)arg1 ;
-(void)_disableAllNetworkTypes;
-(BOOL)hasSizeLimitForNetworkType:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

