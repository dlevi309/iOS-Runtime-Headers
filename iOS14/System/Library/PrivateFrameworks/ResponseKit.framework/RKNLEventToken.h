/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
*/


@class NSString;

@interface RKNLEventToken : NSObject {

	unsigned _tokenID;
	NSString* _string;
	long long _location;
	long long _length;

}

@property (retain) NSString * string;               //@synthesize string=_string - In the implementation block
@property (assign) unsigned tokenID;                //@synthesize tokenID=_tokenID - In the implementation block
@property (assign) long long location;              //@synthesize location=_location - In the implementation block
@property (assign) long long length;                //@synthesize length=_length - In the implementation block
-(void)setLength:(long long)arg1 ;
-(unsigned)tokenID;
-(long long)location;
-(long long)length;
-(void)setLocation:(long long)arg1 ;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(void)setTokenID:(unsigned)arg1 ;
-(id)initWithString:(id)arg1 location:(long long)arg2 length:(long long)arg3 ;
@end

