/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <AppleAccount/AAResponse.h>

@class NSData, NSValue, NSString;

@interface AAPhotoResponse : AAResponse {

	NSData* _photoData;
	NSValue* _cropRect;
	NSString* _serverCacheTag;

}

@property (nonatomic,readonly) NSData * photoData;                     //@synthesize photoData=_photoData - In the implementation block
@property (nonatomic,readonly) NSValue * cropRect;                     //@synthesize cropRect=_cropRect - In the implementation block
@property (nonatomic,readonly) NSString * serverCacheTag;              //@synthesize serverCacheTag=_serverCacheTag - In the implementation block
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(NSString *)serverCacheTag;
-(NSData *)photoData;
-(NSValue *)cropRect;
@end

