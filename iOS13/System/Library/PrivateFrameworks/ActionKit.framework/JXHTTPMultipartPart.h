/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


#import <ActionKit/ActionKit-Structs.h>
@class NSString, NSData;

@interface JXHTTPMultipartPart : NSObject {

	int _multipartType;
	NSString* _key;
	NSData* _preData;
	NSData* _contentData;
	NSData* _postData;

}

@property (assign,nonatomic) int multipartType;                 //@synthesize multipartType=_multipartType - In the implementation block
@property (nonatomic,retain) NSString * key;                    //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSData * preData;                  //@synthesize preData=_preData - In the implementation block
@property (nonatomic,retain) NSData * contentData;              //@synthesize contentData=_contentData - In the implementation block
@property (nonatomic,retain) NSData * postData;                 //@synthesize postData=_postData - In the implementation block
+(id)withMultipartType:(int)arg1 key:(id)arg2 data:(id)arg3 contentType:(id)arg4 fileName:(id)arg5 boundary:(id)arg6 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(id)filePath;
-(NSData *)postData;
-(void)setPostData:(NSData *)arg1 ;
-(long long)contentLength;
-(long long)dataLength;
-(unsigned long long)loadMutableData:(id)arg1 withDataInRange:(NSRange)arg2 ;
-(int)multipartType;
-(void)setMultipartType:(int)arg1 ;
-(NSData *)preData;
-(void)setPreData:(NSData *)arg1 ;
-(NSData *)contentData;
-(void)setContentData:(NSData *)arg1 ;
@end

