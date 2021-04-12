/*
* Generated on Thursday, January 14, 2021 at 2:29:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

#import <libobjc.A.dylib/ACC2SVTransportControllerProtocol.h>

@protocol ACM2SVTransportControllerDelegate;
@class NSString;

@interface ACM2SVTransportController : NSObject <ACC2SVTransportControllerProtocol> {

	id<ACM2SVTransportControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<ACM2SVTransportControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<ACM2SVTransportControllerDelegate>)delegate;
-(void)setDelegate:(id<ACM2SVTransportControllerDelegate>)arg1 ;
-(void)generateAndSendSecCodeWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)verifySecureCodeWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)loadTrustedDevicesWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getImageWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelImageFetching;
@end

