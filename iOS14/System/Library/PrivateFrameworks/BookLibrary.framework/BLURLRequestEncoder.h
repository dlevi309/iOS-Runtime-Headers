/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/

#import <AppleMediaServices/AMSURLRequestEncoder.h>
#import <libobjc.A.dylib/AMSRequestEncoding.h>

@class NSNumber, NSString;

@interface BLURLRequestEncoder : AMSURLRequestEncoder <AMSRequestEncoding> {

	NSNumber* _dsid;
	long long _reason;
	unsigned long long _contentType;

}

@property (nonatomic,retain) NSNumber * dsid;                             //@synthesize dsid=_dsid - In the implementation block
@property (assign,nonatomic) long long reason;                            //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) unsigned long long contentType;              //@synthesize contentType=_contentType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)DAAPClientVersionString;
+(id)DAAPPurchaseVersionString;
-(NSNumber *)dsid;
-(void)setDsid:(NSNumber *)arg1 ;
-(unsigned long long)contentType;
-(id)requestByEncodingRequest:(id)arg1 parameters:(id)arg2 ;
-(id)initWithBag:(id)arg1 withURLRequest:(id)arg2 ;
-(long long)reason;
-(void)setContentType:(unsigned long long)arg1 ;
-(void)setReason:(long long)arg1 ;
@end

