/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
*/


@class NSString;

@interface TLToneImportResponse : NSObject {

	long long _statusCode;
	NSString* _toneIdentifier;

}

@property (nonatomic,readonly) long long statusCode;                   //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,readonly) NSString * toneIdentifier;              //@synthesize toneIdentifier=_toneIdentifier - In the implementation block
-(id)description;
-(long long)statusCode;
-(NSString *)toneIdentifier;
-(id)initWithStatusCode:(long long)arg1 toneIdentifier:(id)arg2 ;
@end

