/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/


@class NSURL, NSString;

@interface BLHLSKey : NSObject {

	long long _method;
	NSURL* _url;
	NSString* _keyFormat;
	NSString* _keyFormatVersions;
	NSString* _iv;

}

@property (nonatomic,readonly) long long method;                          //@synthesize method=_method - In the implementation block
@property (nonatomic,readonly) NSURL * url;                               //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSString * keyFormat;                      //@synthesize keyFormat=_keyFormat - In the implementation block
@property (nonatomic,readonly) NSString * keyFormatVersions;              //@synthesize keyFormatVersions=_keyFormatVersions - In the implementation block
@property (nonatomic,readonly) NSString * iv;                             //@synthesize iv=_iv - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)method;
-(NSURL *)url;
-(NSString *)keyFormat;
-(NSString *)iv;
-(void)setPropertiesFromAttributeList:(id)arg1 ;
-(BOOL)isFormatSupported;
-(NSString *)keyFormatVersions;
-(BOOL)isEqualToHLSKey:(id)arg1 ;
@end

