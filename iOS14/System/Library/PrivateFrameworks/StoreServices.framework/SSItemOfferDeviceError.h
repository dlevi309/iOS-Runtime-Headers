/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class NSString, NSURL;

@interface SSItemOfferDeviceError : NSObject {

	NSString* _localizedMessage;
	NSString* _localizedTitle;
	NSString* _localizedURLTitle;
	NSURL* _url;

}

@property (nonatomic,readonly) NSString * localizedMessage;               //@synthesize localizedMessage=_localizedMessage - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle;                 //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,readonly) NSString * localizedURLTitle;              //@synthesize localizedURLTitle=_localizedURLTitle - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                               //@synthesize url=_url - In the implementation block
-(NSString *)localizedTitle;
-(NSString *)localizedURLTitle;
-(id)_initWithMessage:(id)arg1 title:(id)arg2 URLTitle:(id)arg3 URL:(id)arg4 ;
-(NSURL *)URL;
-(NSString *)localizedMessage;
-(void)dealloc;
@end

