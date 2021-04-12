/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSHTTPURLResponse, NSURL, NSArray;

@interface SSVPlaybackResponse : NSObject <NSCopying> {

	NSDictionary* _responseDictionary;
	NSHTTPURLResponse* _urlResponse;
	NSURL* _fallbackStreamingKeyServerURL;
	NSURL* _fallbackStreamingKeyCertificateURL;

}

@property (nonatomic,copy) NSURL * fallbackStreamingKeyServerURL;                   //@synthesize fallbackStreamingKeyServerURL=_fallbackStreamingKeyServerURL - In the implementation block
@property (nonatomic,copy) NSURL * fallbackStreamingKeyCertificateURL;              //@synthesize fallbackStreamingKeyCertificateURL=_fallbackStreamingKeyCertificateURL - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * responseDictionary;              //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (nonatomic,readonly) NSHTTPURLResponse * URLResponse;                     //@synthesize urlResponse=_urlResponse - In the implementation block
@property (nonatomic,readonly) NSArray * items; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)items;
-(NSDictionary *)responseDictionary;
-(void)_enumerateItemsUsingBlock:(/*^block*/id)arg1 ;
-(NSURL *)fallbackStreamingKeyServerURL;
-(void)setFallbackStreamingKeyServerURL:(NSURL *)arg1 ;
-(NSURL *)fallbackStreamingKeyCertificateURL;
-(void)setFallbackStreamingKeyCertificateURL:(NSURL *)arg1 ;
-(id)initWithDictionary:(id)arg1 URLResponse:(id)arg2 ;
-(id)itemForItemIdentifier:(id)arg1 ;
-(NSHTTPURLResponse *)URLResponse;
@end

