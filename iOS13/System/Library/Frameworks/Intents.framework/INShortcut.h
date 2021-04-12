/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) INImage * _keyImage; 
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
+(id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)writableTypeIdentifiersForItemProvider;
+(long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)arg1 ;
+(id)readableTypeIdentifiersForItemProvider;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(NSString *)_subtitle;
-(NSString *)_title;
-(INIntent *)intent;
-(INImage *)_keyImage;
-(void)_injectProxiesForImages:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(NSUserActivity *)userActivity;
-(NSString *)_associatedAppBundleIdentifier;
-(INImage *)activityImage;
-(long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2 ;
-(id)_initWithIntent:(id)arg1 ;
-(id)initWithIntent:(id)arg1 ;
-(id)initWithUserActivity:(id)arg1 ;
-(id)initWithUserActivity:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id)initWithActivityData:(id)arg1 activityImage:(id)arg2 activitySubtitle:(id)arg3 activityBundleIdentifier:(id)arg4 ;
-(id)shortcutWithActivityImage:(id)arg1 ;
-(id)shortcutWithActivityBundleIdentifier:(id)arg1 ;
-(NSData *)activityData;
-(NSString *)activitySubtitle;
-(NSString *)activityBundleIdentifier;
@end

