/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@class NSNumber, NSString, NSURL, NSData, NSDictionary;

@interface IMRecentItem : NSObject {

	NSNumber* _timestamp;
	NSString* _GUID;
	NSURL* _fileURL;
	NSData* _payloadData;
	NSDictionary* _messageItemInfo;
	NSString* _accessibilityString;

}

@property (nonatomic,retain) NSNumber * timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (getter=UID,nonatomic,copy) NSString * GUID;                    //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,retain) NSURL * fileURL;                             //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,retain) NSData * payloadData;                        //@synthesize payloadData=_payloadData - In the implementation block
@property (nonatomic,retain) NSDictionary * messageItemInfo;              //@synthesize messageItemInfo=_messageItemInfo - In the implementation block
@property (nonatomic,retain) NSString * accessibilityString;              //@synthesize accessibilityString=_accessibilityString - In the implementation block
-(void)setFileURL:(NSURL *)arg1 ;
-(NSData *)payloadData;
-(NSNumber *)timestamp;
-(NSURL *)fileURL;
-(void)setPayloadData:(NSData *)arg1 ;
-(NSDictionary *)messageItemInfo;
-(id)initWithGUID:(id)arg1 data:(id)arg2 messageItemInfo:(id)arg3 ;
-(id)asJSONObject;
-(void)setMessageItemInfo:(NSDictionary *)arg1 ;
-(void)setGUID:(NSString *)arg1 ;
-(unsigned long long)hash;
-(NSString *)accessibilityString;
-(void)setAccessibilityString:(NSString *)arg1 ;
-(void)setTimestamp:(NSNumber *)arg1 ;
-(NSString *)GUID;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

