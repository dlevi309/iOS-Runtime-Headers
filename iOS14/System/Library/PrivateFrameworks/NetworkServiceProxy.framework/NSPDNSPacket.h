/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
*/


@class NSDate, NSArray, NSData, NSString;

@interface NSPDNSPacket : NSObject {

	BOOL _isAuthoritativeAnswer;
	BOOL _isTruncated;
	BOOL _isRecursionDesired;
	BOOL _isRecursionAvailable;
	long long _identifier;
	NSDate* _timestamp;
	long long _messageType;
	long long _opCode;
	long long _responseCode;
	NSArray* _queries;
	NSArray* _answers;
	NSArray* _authorities;
	NSArray* _additionalRecords;
	NSData* _data;

}

@property (readonly) NSData * data;                              //@synthesize data=_data - In the implementation block
@property (readonly) long long identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (readonly) NSDate * timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) long long messageType;                      //@synthesize messageType=_messageType - In the implementation block
@property (readonly) long long opCode;                           //@synthesize opCode=_opCode - In the implementation block
@property (readonly) BOOL isAuthoritativeAnswer;                 //@synthesize isAuthoritativeAnswer=_isAuthoritativeAnswer - In the implementation block
@property (readonly) BOOL isTruncated;                           //@synthesize isTruncated=_isTruncated - In the implementation block
@property (readonly) BOOL isRecursionDesired;                    //@synthesize isRecursionDesired=_isRecursionDesired - In the implementation block
@property (readonly) BOOL isRecursionAvailable;                  //@synthesize isRecursionAvailable=_isRecursionAvailable - In the implementation block
@property (readonly) long long responseCode;                     //@synthesize responseCode=_responseCode - In the implementation block
@property (readonly) NSString * responseCodeString; 
@property (readonly) NSArray * queries;                          //@synthesize queries=_queries - In the implementation block
@property (readonly) NSArray * answers;                          //@synthesize answers=_answers - In the implementation block
@property (readonly) NSArray * authorities;                      //@synthesize authorities=_authorities - In the implementation block
@property (readonly) NSArray * additionalRecords;                //@synthesize additionalRecords=_additionalRecords - In the implementation block
-(long long)messageType;
-(BOOL)isTruncated;
-(long long)opCode;
-(NSDate *)timestamp;
-(NSArray *)answers;
-(NSData *)data;
-(id)initFromData:(id)arg1 ;
-(NSString *)responseCodeString;
-(BOOL)isAuthoritativeAnswer;
-(BOOL)isRecursionDesired;
-(BOOL)isRecursionAvailable;
-(NSArray *)authorities;
-(NSArray *)additionalRecords;
-(NSArray *)queries;
-(long long)identifier;
-(long long)responseCode;
@end

