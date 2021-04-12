/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)iv;
-(long long)method;
-(NSURL *)url;
-(id)description;
-(void)setPropertiesFromAttributeList:(id)arg1 ;
-(BOOL)isFormatSupported;
-(NSString *)keyFormatVersions;
-(BOOL)isEqualToHLSKey:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)keyFormat;
-(BOOL)isEqual:(id)arg1 ;
@end

