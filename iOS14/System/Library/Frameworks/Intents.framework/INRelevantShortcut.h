/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INKeyImageProducing.h>
#import <libobjc.A.dylib/INImageProxyInjecting.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, INDefaultCardTemplate, INShortcut, INImage, NSString;

@interface INRelevantShortcut : NSObject <INKeyImageProducing, INImageProxyInjecting, NSSecureCoding, NSCopying> {

	NSArray* _relevanceProviders;
	INDefaultCardTemplate* _watchTemplate;
	long long _shortcutRole;
	INShortcut* _shortcut;

}

@property (readonly) INImage * _keyImage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) INShortcut * shortcut;                              //@synthesize shortcut=_shortcut - In the implementation block
@property (nonatomic,copy) NSArray * relevanceProviders;                       //@synthesize relevanceProviders=_relevanceProviders - In the implementation block
@property (nonatomic,copy) INDefaultCardTemplate * watchTemplate;              //@synthesize watchTemplate=_watchTemplate - In the implementation block
@property (assign,nonatomic) long long shortcutRole;                           //@synthesize shortcutRole=_shortcutRole - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2 ;
-(id)initWithShortcut:(id)arg1 ;
-(void)setWatchTemplate:(INDefaultCardTemplate *)arg1 ;
-(void)setRelevanceProviders:(NSArray *)arg1 ;
-(long long)shortcutRole;
-(void)setShortcutRole:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(INShortcut *)shortcut;
-(void)setShortcut:(INShortcut *)arg1 ;
-(INImage *)_keyImage;
-(id)initWithCoder:(id)arg1 ;
-(INDefaultCardTemplate *)watchTemplate;
-(NSArray *)relevanceProviders;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_injectProxiesForImages:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
@end

