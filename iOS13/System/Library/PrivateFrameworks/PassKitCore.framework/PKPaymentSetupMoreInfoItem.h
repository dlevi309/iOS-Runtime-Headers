/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSString, NSURL, NSData;

@interface PKPaymentSetupMoreInfoItem : NSObject {

	NSString* _title;
	NSString* _body;
	NSString* _linkText;
	NSURL* _linkURL;
	NSURL* _imageURL;
	NSData* _imageData;

}

@property (nonatomic,copy,readonly) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * body;                  //@synthesize body=_body - In the implementation block
@property (nonatomic,copy,readonly) NSString * linkText;              //@synthesize linkText=_linkText - In the implementation block
@property (nonatomic,copy,readonly) NSURL * linkURL;                  //@synthesize linkURL=_linkURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * imageURL;                 //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,copy) NSData * imageData;                        //@synthesize imageData=_imageData - In the implementation block
-(NSString *)title;
-(NSString *)body;
-(NSURL *)imageURL;
-(NSData *)imageData;
-(void)setImageData:(NSData *)arg1 ;
-(NSURL *)linkURL;
-(id)initWithMoreInfoDictionary:(id)arg1 imageData:(id)arg2 ;
-(id)initWithMoreInfoDictionary:(id)arg1 ;
-(NSString *)linkText;
@end

