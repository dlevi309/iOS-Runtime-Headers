/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@class PKProtobufShareableCredentialMessage, MSMessage, NSArray, NSString, UIImage;

@interface PKShareableCredentialMessage : NSObject {

	PKProtobufShareableCredentialMessage* _protoMessage;
	MSMessage* _underlyingMessage;

}

@property (nonatomic,readonly) MSMessage * underlyingMessage;              //@synthesize underlyingMessage=_underlyingMessage - In the implementation block
@property (nonatomic,copy) NSArray * shareableCredentials; 
@property (nonatomic,copy) NSString * dataString; 
@property (nonatomic,copy) NSString * caption; 
@property (nonatomic,copy) NSString * policyIdentifier; 
@property (nonatomic,copy) UIImage * passThumbnailImage; 
-(NSString *)caption;
-(id)_shareableCredentialMessageDataWithDataURL:(id)arg1 ;
-(id)_shareableCredentialMessageDataURLWithData:(id)arg1 ;
-(void)setCaption:(NSString *)arg1 ;
-(id)init;
-(id)description;
-(UIImage *)passThumbnailImage;
-(NSString *)policyIdentifier;
-(void)setPolicyIdentifier:(NSString *)arg1 ;
-(void)setPassThumbnailImage:(UIImage *)arg1 ;
-(NSArray *)shareableCredentials;
-(void)setShareableCredentials:(NSArray *)arg1 ;
-(void)_updateDataURL;
-(NSString *)dataString;
-(void)setDataString:(NSString *)arg1 ;
-(id)initWithUnderlyingMessage:(id)arg1 ;
-(void)_updateLayoutContents;
-(MSMessage *)underlyingMessage;
@end

