/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSData, NSURL, NSString;

@interface SAUIImageResource : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSData * imageData; 
@property (assign,nonatomic) double pixelHeight; 
@property (assign,nonatomic) double pixelWidth; 
@property (assign,nonatomic) double pointHeight; 
@property (assign,nonatomic) double pointWidth; 
@property (nonatomic,copy) NSURL * resourceUrl; 
@property (assign,nonatomic) double scaleFactor; 
@property (nonatomic,copy) NSString * urlFormatString; 
@property (nonatomic,copy) NSString * userAgent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)imageResource;
+(id)imageResourceWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setScaleFactor:(double)arg1 ;
-(double)scaleFactor;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setPixelHeight:(double)arg1 ;
-(void)setPixelWidth:(double)arg1 ;
-(double)pixelHeight;
-(double)pointHeight;
-(void)setPointHeight:(double)arg1 ;
-(NSData *)imageData;
-(double)pointWidth;
-(void)setPointWidth:(double)arg1 ;
-(NSURL *)resourceUrl;
-(void)setResourceUrl:(NSURL *)arg1 ;
-(NSString *)urlFormatString;
-(void)setUrlFormatString:(NSString *)arg1 ;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
-(double)pixelWidth;
@end

