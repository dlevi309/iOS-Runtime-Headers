/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/


#import <AppleDepth/AppleDepth-Structs.h>
@class NSArray, NSURL;

@interface ADEspressoInferenceDescriptor : NSObject {

	NSArray* _layoutNames;
	NSURL* _networkURL;
	NSURL* _networkVersionString;

}

@property (nonatomic,copy,readonly) NSURL * networkURL;                        //@synthesize networkURL=_networkURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * networkVersionString;              //@synthesize networkVersionString=_networkVersionString - In the implementation block
+(id)descriptorWithName:(id)arg1 pixelFormat:(unsigned)arg2 size:(CGSize)arg3 isInput:(BOOL)arg4 ;
+(id)descriptorWithName:(id)arg1 pixelFormat:(unsigned)arg2 portraitSize:(CGSize)arg3 landscapeSize:(CGSize)arg4 isInput:(BOOL)arg5 ;
-(NSURL *)networkURL;
-(id)configurationNameForLayout:(unsigned long long)arg1 ;
-(NSURL *)networkVersionString;
-(id)initWithNetworkProvider:(id)arg1 ;
@end

