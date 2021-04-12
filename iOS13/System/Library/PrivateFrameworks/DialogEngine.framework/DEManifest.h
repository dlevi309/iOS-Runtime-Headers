/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


@class NSDictionary, NSData;

@interface DEManifest : NSObject {

	NSDictionary* _contents;
	NSData* _version;
	NSData* _keyVersion;

}

@property (nonatomic,retain) NSDictionary * contents;              //@synthesize contents=_contents - In the implementation block
@property (nonatomic,retain) NSData * version;                     //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSData * keyVersion;                  //@synthesize keyVersion=_keyVersion - In the implementation block
+(id)manifestWithContentsOfURL:(id)arg1 encrypted:(BOOL)arg2 ;
+(BOOL)write:(id)arg1 toURL:(id)arg2 keyId:(unsigned long long)arg3 multipart:(BOOL)arg4 ;
-(id)init;
-(NSDictionary *)contents;
-(NSData *)version;
-(void)setVersion:(NSData *)arg1 ;
-(void)setContents:(NSDictionary *)arg1 ;
-(NSData *)keyVersion;
-(id)initWithContents:(id)arg1 version:(id)arg2 keyVersion:(id)arg3 ;
-(void)setKeyVersion:(NSData *)arg1 ;
@end

