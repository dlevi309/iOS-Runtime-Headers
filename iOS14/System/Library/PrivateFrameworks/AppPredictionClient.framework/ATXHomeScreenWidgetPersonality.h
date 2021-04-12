/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/ATXHomeScreenWidgetPersonalityProviding.h>

@class NSString;

@interface ATXHomeScreenWidgetPersonality : NSObject <NSSecureCoding, ATXHomeScreenWidgetPersonalityProviding> {

	NSString* _extensionBundleId;
	NSString* _kind;

}

@property (nonatomic,readonly) NSString * extensionBundleId;                    //@synthesize extensionBundleId=_extensionBundleId - In the implementation block
@property (nonatomic,readonly) NSString * kind;                                 //@synthesize kind=_kind - In the implementation block
@property (readonly) ATXHomeScreenWidgetPersonality * personality; 
+(BOOL)supportsSecureCoding;
+(id)stringRepresentationForExtensionBundleId:(id)arg1 kind:(id)arg2 ;
+(id)widgetBundleIdForWidgetPersonalityStringRepresentation:(id)arg1 ;
+(id)widgetKindForWidgetPersonalityStringRepresentation:(id)arg1 ;
-(NSString *)extensionBundleId;
-(id)stringRepresentation;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)kind;
-(id)description;
-(unsigned long long)hash;
-(ATXHomeScreenWidgetPersonality *)personality;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithExtensionBundleId:(id)arg1 kind:(id)arg2 ;
@end

