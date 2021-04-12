/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/WBUFormAutoFillFrameHandle.h>

@class NSURL, _WKFrameHandle, NSString;

@interface SFFormAutoFillFrameHandle : NSObject <NSCopying, NSSecureCoding, WBUFormAutoFillFrameHandle> {

	NSURL* _URL;
	SecTrustRef _serverTrust;
	_WKFrameHandle* _frameHandle;

}

@property (nonatomic,readonly) _WKFrameHandle * frameHandle;               //@synthesize frameHandle=_frameHandle - In the implementation block
@property (nonatomic,readonly) NSURL * webui_URL; 
@property (nonatomic,readonly) SecTrustRef webui_serverTrust; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithFrameHandle:(id)arg1 URL:(id)arg2 serverTrust:(SecTrustRef)arg3 ;
-(SecTrustRef)webui_serverTrust;
-(NSString *)description;
-(id)initWithWebProcessPlugInFrame:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(_WKFrameHandle *)frameHandle;
-(NSURL *)webui_URL;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

