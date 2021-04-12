/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface SLMicroBlogStatus : NSObject <NSSecureCoding> {

	NSString* _statusText;
	NSArray* _imageData;
	NSArray* _imageAssetURLs;
	NSString* _maskedApplicationID;
	NSString* _inReplyToStatusID;

}

@property (nonatomic,retain) NSString * statusText;                       //@synthesize statusText=_statusText - In the implementation block
@property (nonatomic,retain) NSArray * imageData;                         //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,retain) NSArray * imageAssetURLs;                    //@synthesize imageAssetURLs=_imageAssetURLs - In the implementation block
@property (nonatomic,retain) NSString * maskedApplicationID;              //@synthesize maskedApplicationID=_maskedApplicationID - In the implementation block
@property (nonatomic,retain) NSString * inReplyToStatusID;                //@synthesize inReplyToStatusID=_inReplyToStatusID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)statusText;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)imageData;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)imageAssetURLs;
-(void)setImageData:(NSArray *)arg1 ;
-(void)setStatusText:(NSString *)arg1 ;
-(NSString *)maskedApplicationID;
-(NSString *)inReplyToStatusID;
-(void)setImageAssetURLs:(NSArray *)arg1 ;
-(void)setMaskedApplicationID:(NSString *)arg1 ;
-(void)setInReplyToStatusID:(NSString *)arg1 ;
-(void)loadAssetDataIfNecessaryWithMaxByteSize:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
@end

