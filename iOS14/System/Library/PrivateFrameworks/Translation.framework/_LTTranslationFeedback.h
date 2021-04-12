/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <libobjc.A.dylib/_LTLoggingRequest.h>

@class NSString, NSURL, _LTLocalePair;

@interface _LTTranslationFeedback : NSObject <_LTLoggingRequest> {

	NSString* _sourceContentAsJSON;
	NSString* _targetContentAsJSON;
	NSString* _errorsAsJSON;
	NSString* _safariVersion;
	NSURL* _webpageURL;
	_LTLocalePair* _localePair;
	NSString* _sessionID;
	NSString* _clientBundleID;

}

@property (nonatomic,copy) NSString * sessionID;                        //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,copy) NSString * clientBundleID;                   //@synthesize clientBundleID=_clientBundleID - In the implementation block
@property (nonatomic,copy) NSString * sourceContentAsJSON;              //@synthesize sourceContentAsJSON=_sourceContentAsJSON - In the implementation block
@property (nonatomic,copy) NSString * targetContentAsJSON;              //@synthesize targetContentAsJSON=_targetContentAsJSON - In the implementation block
@property (nonatomic,copy) NSString * errorsAsJSON;                     //@synthesize errorsAsJSON=_errorsAsJSON - In the implementation block
@property (nonatomic,copy) NSString * safariVersion;                    //@synthesize safariVersion=_safariVersion - In the implementation block
@property (nonatomic,copy) NSURL * webpageURL;                          //@synthesize webpageURL=_webpageURL - In the implementation block
@property (nonatomic,copy) _LTLocalePair * localePair;                  //@synthesize localePair=_localePair - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)clientBundleID;
-(NSURL *)webpageURL;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(void)setWebpageURL:(NSURL *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(_LTLocalePair *)localePair;
-(void)setClientBundleID:(NSString *)arg1 ;
-(void)setLocalePair:(_LTLocalePair *)arg1 ;
-(NSString *)sourceContentAsJSON;
-(NSString *)errorsAsJSON;
-(void)setSourceContentAsJSON:(NSString *)arg1 ;
-(NSString *)targetContentAsJSON;
-(void)setTargetContentAsJSON:(NSString *)arg1 ;
-(void)setErrorsAsJSON:(NSString *)arg1 ;
-(NSString *)safariVersion;
-(void)setSafariVersion:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

