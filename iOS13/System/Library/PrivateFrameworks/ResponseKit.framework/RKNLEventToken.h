/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)string;
-(long long)length;
-(void)setLength:(long long)arg1 ;
-(void)setString:(NSString *)arg1 ;
-(long long)location;
-(unsigned)tokenID;
-(void)setLocation:(long long)arg1 ;
-(id)initWithString:(id)arg1 location:(long long)arg2 length:(long long)arg3 ;
-(void)setTokenID:(unsigned)arg1 ;
@end

