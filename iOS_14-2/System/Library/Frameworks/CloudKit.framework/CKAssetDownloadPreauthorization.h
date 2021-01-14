/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSData;

@interface CKAssetDownloadPreauthorization : NSObject <NSCopying> {

	NSString* _responseUUID;
	NSDictionary* _contentResponseHeaders;
	NSData* _contentResponseBody;

}

@property (nonatomic,retain) NSString * responseUUID;                            //@synthesize responseUUID=_responseUUID - In the implementation block
@property (nonatomic,retain) NSDictionary * contentResponseHeaders;              //@synthesize contentResponseHeaders=_contentResponseHeaders - In the implementation block
@property (nonatomic,retain) NSData * contentResponseBody;                       //@synthesize contentResponseBody=_contentResponseBody - In the implementation block
-(NSString *)responseUUID;
-(NSDictionary *)contentResponseHeaders;
-(NSData *)contentResponseBody;
-(id)initWithResponseUUID:(id)arg1 contentResponseHeaders:(id)arg2 contentResponseBody:(id)arg3 ;
-(void)setResponseUUID:(NSString *)arg1 ;
-(void)setContentResponseHeaders:(NSDictionary *)arg1 ;
-(void)setContentResponseBody:(NSData *)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

