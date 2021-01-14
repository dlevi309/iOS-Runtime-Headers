/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
*/


@class NSString;

@interface TLToneImportResponse : NSObject {

	long long _statusCode;
	NSString* _toneIdentifier;

}

@property (nonatomic,readonly) long long statusCode;                   //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,readonly) NSString * toneIdentifier;              //@synthesize toneIdentifier=_toneIdentifier - In the implementation block
-(NSString *)toneIdentifier;
-(long long)statusCode;
-(id)description;
-(id)initWithStatusCode:(long long)arg1 toneIdentifier:(id)arg2 ;
@end

