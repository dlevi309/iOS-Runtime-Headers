/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreOverlays.framework/AppStoreOverlays
*/

#import <AppStoreOverlays/AppStoreOverlays-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/ASOOverlayConfiguration.h>

@class NSMutableDictionary, NSString;

@interface ASOOverlayAppConfiguration : NSObject <NSSecureCoding, ASOOverlayConfiguration> {

	NSMutableDictionary* _storage;

}

@property (nonatomic,retain,readonly) NSMutableDictionary * storage;              //@synthesize storage=_storage - In the implementation block
@property (nonatomic,retain) NSString * appIdentifier; 
@property (nonatomic,retain) NSString * campaignToken; 
@property (nonatomic,retain) NSString * providerToken; 
@property (assign,nonatomic) long long position; 
@property (assign,nonatomic) BOOL userDismissible; 
@property (assign,nonatomic) BOOL userDismissable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithStorage:(id)arg1 ;
-(void)setAppIdentifier:(NSString *)arg1 ;
-(long long)position;
-(NSString *)appIdentifier;
-(NSMutableDictionary *)storage;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(void)setPosition:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithAppIdentifier:(id)arg1 position:(long long)arg2 ;
-(void)setCampaignToken:(NSString *)arg1 ;
-(NSString *)campaignToken;
-(void)setProviderToken:(NSString *)arg1 ;
-(NSString *)providerToken;
-(void)setUserDismissible:(BOOL)arg1 ;
-(BOOL)userDismissible;
-(void)setAdditionalValue:(id)arg1 forKey:(id)arg2 ;
-(id)additionalValueForKey:(id)arg1 ;
-(void)setUserDismissable:(BOOL)arg1 ;
-(BOOL)userDismissable;
@end

