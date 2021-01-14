/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INKeyImageProducing.h>
#import <libobjc.A.dylib/NSItemProviderReading.h>
#import <libobjc.A.dylib/NSItemProviderWriting.h>
#import <libobjc.A.dylib/INImageProxyInjecting.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSData, INIntent, NSUserActivity, INImage, NSString;

@interface INShortcut : NSObject <INKeyImageProducing, NSItemProviderReading, NSItemProviderWriting, INImageProxyInjecting, NSSecureCoding, NSCopying> {

	NSData* _activityData;
	INIntent* _intent;
	NSUserActivity* _userActivity;
	INImage* _activityImage;
	NSString* _activitySubtitle;
	NSString* _activityBundleIdentifier;

}

@property (readonly) INImage * _keyImage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * writableTypeIdentifiersForItemProvider; 
@property (nonatomic,copy,readonly) NSData * activityData;                                         //@synthesize activityData=_activityData - In the implementation block
@property (nonatomic,copy,readonly) INImage * activityImage;                                       //@synthesize activityImage=_activityImage - In the implementation block
@property (nonatomic,copy,readonly) NSString * activitySubtitle;                                   //@synthesize activitySubtitle=_activitySubtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * activityBundleIdentifier;                           //@synthesize activityBundleIdentifier=_activityBundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * _title; 
@property (nonatomic,readonly) NSString * _subtitle; 
@property (nonatomic,readonly) NSString * _associatedAppBundleIdentifier; 
@property (nonatomic,copy,readonly) INIntent * intent;                                             //@synthesize intent=_intent - In the implementation block
@property (nonatomic,readonly) NSUserActivity * userActivity;                                      //@synthesize userActivity=_userActivity - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)arg1 ;
+(id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)writableTypeIdentifiersForItemProvider;
+(id)readableTypeIdentifiersForItemProvider;
-(NSString *)_title;
-(NSUserActivity *)userActivity;
-(INIntent *)intent;
-(id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2 ;
-(id)initWithUserActivity:(id)arg1 ;
-(id)initWithUserActivity:(id)arg1 bundleIdentifier:(id)arg2 ;
-(NSData *)activityData;
-(id)initWithActivityData:(id)arg1 activityImage:(id)arg2 activitySubtitle:(id)arg3 activityBundleIdentifier:(id)arg4 ;
-(NSString *)activityBundleIdentifier;
-(id)shortcutWithActivityImage:(id)arg1 ;
-(id)shortcutWithActivityBundleIdentifier:(id)arg1 ;
-(NSString *)_associatedAppBundleIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_initWithIntent:(id)arg1 ;
-(NSString *)activitySubtitle;
-(NSString *)description;
-(INImage *)_keyImage;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)_subtitle;
-(id)initWithIntent:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_injectProxiesForImages:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(INImage *)activityImage;
@end

