/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)groupIdentifier;
-(double)scaleFactor;
-(void)setScaleFactor:(double)arg1 ;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSData *)imageData;
-(void)setImageData:(NSData *)arg1 ;
-(double)pixelWidth;
-(void)setPixelWidth:(double)arg1 ;
-(double)pixelHeight;
-(void)setPixelHeight:(double)arg1 ;
-(id)encodedClassName;
-(double)pointHeight;
-(void)setPointHeight:(double)arg1 ;
-(double)pointWidth;
-(void)setPointWidth:(double)arg1 ;
-(NSURL *)resourceUrl;
-(void)setResourceUrl:(NSURL *)arg1 ;
-(NSString *)urlFormatString;
-(void)setUrlFormatString:(NSString *)arg1 ;
@end

