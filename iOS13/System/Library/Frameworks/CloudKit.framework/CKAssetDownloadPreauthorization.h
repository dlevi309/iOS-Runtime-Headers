/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)responseUUID;
-(id)initWithResponseUUID:(id)arg1 contentResponseHeaders:(id)arg2 contentResponseBody:(id)arg3 ;
-(void)setResponseUUID:(NSString *)arg1 ;
-(NSDictionary *)contentResponseHeaders;
-(void)setContentResponseHeaders:(NSDictionary *)arg1 ;
-(NSData *)contentResponseBody;
-(void)setContentResponseBody:(NSData *)arg1 ;
@end

