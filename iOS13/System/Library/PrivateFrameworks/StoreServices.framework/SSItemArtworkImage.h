/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(BOOL)isPrerendered;
-(long long)width;
-(long long)height;
-(long long)imageOrientation;
-(NSString *)URLString;
-(void)_setValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueForProperty:(id)arg1 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ;
-(CGSize)imageSize;
-(double)imageScale;
-(id)initWithArtworkDictionary:(id)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setImageKind:(NSString *)arg1 ;
-(NSString *)imageKind;
-(void)setImageKindWithTypeName:(id)arg1 variantName:(id)arg2 ;
@end

