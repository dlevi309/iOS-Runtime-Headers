/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXJSONObject.h>

@class NSString, NSURL;

@interface SXOEmbedResponse : SXJSONObject

@property (nonatomic,readonly) double thumbnailWidth; 
@property (nonatomic,readonly) double thumbnailHeight; 
@property (nonatomic,readonly) NSString * version; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * authorName; 
@property (nonatomic,readonly) NSURL * authorURL; 
@property (nonatomic,readonly) NSString * providerName; 
@property (nonatomic,readonly) NSURL * providerURL; 
@property (nonatomic,readonly) double cacheAge; 
@property (nonatomic,readonly) NSURL * thumbnailURL; 
@property (nonatomic,readonly) CGSize thumbnailSize; 
+(id)jsonPropertyNameForObjCPropertyName:(id)arg1 ;
-(NSURL *)thumbnailURL;
-(double)cacheAge;
-(NSURL *)providerURL;
-(NSString *)providerName;
-(NSURL *)authorURL;
-(NSString *)authorName;
-(NSString *)title;
-(NSString *)version;
-(double)thumbnailHeight;
-(double)thumbnailWidth;
-(id)objectForKey:(id)arg1 ;
-(CGSize)thumbnailSize;
-(double)cacheAgeWithValue:(id)arg1 withType:(int)arg2 ;
@end

