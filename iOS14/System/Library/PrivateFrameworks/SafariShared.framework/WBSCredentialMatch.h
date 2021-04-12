/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <SafariShared/WBSFormAutoFillItem.h>

@class NSURLCredential, NSURLProtectionSpace;

@interface WBSCredentialMatch : WBSFormAutoFillItem {

	NSURLCredential* _credential;
	NSURLProtectionSpace* _protectionSpace;

}

@property (nonatomic,readonly) NSURLCredential * credential;                        //@synthesize credential=_credential - In the implementation block
@property (nonatomic,readonly) NSURLProtectionSpace * protectionSpace;              //@synthesize protectionSpace=_protectionSpace - In the implementation block
-(NSURLCredential *)credential;
-(id)initWithCredential:(id)arg1 protectionSpace:(id)arg2 ;
-(id)completion;
-(id)initWithCredential:(id)arg1 ;
-(NSURLProtectionSpace *)protectionSpace;
@end

