/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICStoreRequestContext.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol ICDeveloperTokenProvider;
@interface ICMusicKitRequestContext : ICStoreRequestContext <NSSecureCoding> {

	id<ICDeveloperTokenProvider> _developerTokenProvider;
	long long _personalizationMethod;

}

@property (nonatomic,readonly) long long _storeRequestPersonalizationStyle; 
@property (nonatomic,readonly) long long personalizationStyle; 
@property (nonatomic,readonly) id<ICDeveloperTokenProvider> developerTokenProvider;              //@synthesize developerTokenProvider=_developerTokenProvider - In the implementation block
@property (nonatomic,readonly) long long personalizationMethod;                                  //@synthesize personalizationMethod=_personalizationMethod - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDeveloperTokenProvider:(id<ICDeveloperTokenProvider>)arg1 ;
-(long long)_storeRequestPersonalizationStyle;
-(id<ICDeveloperTokenProvider>)developerTokenProvider;
-(long long)personalizationMethod;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(id)description;
-(id)copyWithBlock:(/*^block*/id)arg1 ;
-(long long)personalizationStyle;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setPersonalizationStyle:(long long)arg1 ;
-(void)setPersonalizationMethod:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

