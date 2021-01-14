/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
*/


@class NSString;

@interface PKSandboxExtension : NSObject {

	long long _handle;
	NSString* _token;

}

@property (nonatomic,readonly) NSString * token;              //@synthesize token=_token - In the implementation block
@property (assign) long long handle;                          //@synthesize handle=_handle - In the implementation block
-(void)setHandle:(long long)arg1 ;
-(long long)handle;
-(id)initWithExtension:(id)arg1 ;
-(void)expel;
-(void)consume;
-(NSString *)token;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

