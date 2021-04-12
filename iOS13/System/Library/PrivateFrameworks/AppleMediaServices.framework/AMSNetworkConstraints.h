/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)bagKeySet;
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
+(id)_networkConstraintsForMediaType:(id)arg1 withArray:(id)arg2 ;
+(id)networkConstraintsForMediaType:(id)arg1 withBag:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(long long)sizeLimitForNetworkType:(id)arg1 ;
-(void)_setSizeLimit:(long long)arg1 forNetworkType:(id)arg2 ;
-(NSMutableDictionary *)sizeLimits;
-(long long)_sizeLimitForNetworkType:(id)arg1 ;
-(BOOL)isEqualToConstraints:(id)arg1 ;
-(void)_disableAllNetworkTypes;
-(id)_initWithStoreConstraintDictionary:(id)arg1 ;
-(BOOL)isAnyNetworkTypeEnabled;
-(BOOL)hasSizeLimitForNetworkType:(id)arg1 ;
-(void)setSizeLimits:(NSMutableDictionary *)arg1 ;
@end

