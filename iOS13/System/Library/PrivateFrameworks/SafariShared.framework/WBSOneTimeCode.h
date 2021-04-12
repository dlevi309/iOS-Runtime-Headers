/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class NSString, NSDate;

@interface WBSOneTimeCode : NSObject {

	NSString* _code;
	NSString* _displayCode;
	NSString* _guid;
	NSString* _handle;
	NSDate* _timeStamp;

}

@property (nonatomic,copy,readonly) NSString * code;                     //@synthesize code=_code - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayCode;              //@synthesize displayCode=_displayCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * guid;                     //@synthesize guid=_guid - In the implementation block
@property (nonatomic,copy,readonly) NSString * handle;                   //@synthesize handle=_handle - In the implementation block
@property (nonatomic,readonly) NSDate * timeStamp;                       //@synthesize timeStamp=_timeStamp - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)code;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)handle;
-(NSDate *)timeStamp;
-(NSString *)guid;
-(NSString *)displayCode;
@end

