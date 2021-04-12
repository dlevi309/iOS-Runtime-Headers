/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)imageData;
-(void)setImageData:(NSArray *)arg1 ;
-(NSString *)statusText;
-(void)setImageAssetURLs:(NSArray *)arg1 ;
-(void)setMaskedApplicationID:(NSString *)arg1 ;
-(NSArray *)imageAssetURLs;
-(NSString *)maskedApplicationID;
-(NSString *)inReplyToStatusID;
-(void)setStatusText:(NSString *)arg1 ;
-(void)setInReplyToStatusID:(NSString *)arg1 ;
-(void)loadAssetDataIfNecessaryWithMaxByteSize:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
@end

