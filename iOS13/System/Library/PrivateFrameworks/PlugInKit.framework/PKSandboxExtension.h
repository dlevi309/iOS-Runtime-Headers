/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
*/


@class NSString;

@interface PKSandboxExtension : NSObject {

	NSString* _token;
	long long _handle;

}

@property (retain) NSString * token;              //@synthesize token=_token - In the implementation block
@property (assign) long long handle;              //@synthesize handle=_handle - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)token;
-(long long)handle;
-(void)setHandle:(long long)arg1 ;
-(void)setToken:(NSString *)arg1 ;
-(void)consume;
-(id)initWithExtension:(id)arg1 ;
-(void)expel;
@end

