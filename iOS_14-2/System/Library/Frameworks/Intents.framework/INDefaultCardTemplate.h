/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INImageProxyInjecting.h>
#import <libobjc.A.dylib/INKeyImageProducing.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, INImage;

@interface INDefaultCardTemplate : NSObject <INImageProxyInjecting, INKeyImageProducing, NSCopying, NSSecureCoding> {

	NSString* _title;
	NSString* _subtitle;
	INImage* _image;

}

@property (readonly) INImage * _keyImage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                     //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) INImage * image;                         //@synthesize image=_image - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithTitle:(id)arg1 ;
-(void)setImage:(INImage *)arg1 ;
-(long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2 ;
-(NSString *)subtitle;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(INImage *)image;
-(INImage *)_keyImage;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_injectProxiesForImages:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

