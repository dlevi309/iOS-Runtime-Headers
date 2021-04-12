/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURLRequest, AKAppleIDServerResourceLoadDelegate, NSArray;

@interface AKServerRequestConfiguration : NSObject <NSSecureCoding> {

	NSURLRequest* _request;
	AKAppleIDServerResourceLoadDelegate* _resourceLoadDelegate;
	unsigned long long _requestType;
	unsigned long long _presentationType;
	NSArray* _whitelistedPathURLs;

}

@property (nonatomic,retain) NSURLRequest * request;                                                  //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) AKAppleIDServerResourceLoadDelegate * resourceLoadDelegate;              //@synthesize resourceLoadDelegate=_resourceLoadDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long requestType;                                          //@synthesize requestType=_requestType - In the implementation block
@property (assign,nonatomic) unsigned long long presentationType;                                     //@synthesize presentationType=_presentationType - In the implementation block
@property (nonatomic,copy) NSArray * whitelistedPathURLs;                                             //@synthesize whitelistedPathURLs=_whitelistedPathURLs - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setRequestType:(unsigned long long)arg1 ;
-(unsigned long long)requestType;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setResourceLoadDelegate:(AKAppleIDServerResourceLoadDelegate *)arg1 ;
-(NSURLRequest *)request;
-(void)setPresentationType:(unsigned long long)arg1 ;
-(id)description;
-(unsigned long long)presentationType;
-(id)initWithRequest:(id)arg1 requestType:(unsigned long long)arg2 ;
-(AKAppleIDServerResourceLoadDelegate *)resourceLoadDelegate;
-(NSArray *)whitelistedPathURLs;
-(void)setWhitelistedPathURLs:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

