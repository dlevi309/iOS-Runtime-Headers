/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString, NSURL;

@interface SSItemArtworkImage : NSObject <SSXPCCoding, NSCopying> {

	NSMutableDictionary* _dictionary;
	NSString* _imageKind;

}

@property (nonatomic,readonly) CGSize imageSize; 
@property (nonatomic,copy) NSString * imageKind;                                   //@synthesize imageKind=_imageKind - In the implementation block
@property (nonatomic,retain) NSURL * URL; 
@property (nonatomic,readonly) NSString * URLString; 
@property (nonatomic,readonly) long long height; 
@property (nonatomic,readonly) long long width; 
@property (nonatomic,readonly) long long imageOrientation; 
@property (nonatomic,readonly) double imageScale; 
@property (getter=isPrerendered,nonatomic,readonly) BOOL prerendered; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)URLString;
-(long long)imageOrientation;
-(double)imageScale;
-(BOOL)isPrerendered;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(CGSize)imageSize;
-(long long)width;
-(void)_setValue:(id)arg1 forKey:(id)arg2 ;
-(void)setImageKindWithTypeName:(id)arg1 variantName:(id)arg2 ;
-(void)setURL:(NSURL *)arg1 ;
-(id)initWithArtworkDictionary:(id)arg1 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ;
-(long long)height;
-(void)setImageKind:(NSString *)arg1 ;
-(NSString *)description;
-(NSURL *)URL;
-(unsigned long long)hash;
-(id)valueForProperty:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)imageKind;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

