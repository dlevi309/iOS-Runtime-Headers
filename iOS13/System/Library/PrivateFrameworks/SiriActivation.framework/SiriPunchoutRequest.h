/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/

#import <SiriActivation/SiriActivation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface SiriPunchoutRequest : NSObject <NSCopying> {

	NSString* _bundleIdentifier;
	NSURL* _url;
	long long _punchoutStyle;

}

@property (nonatomic,copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * url;                              //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) long long punchoutStyle;                //@synthesize punchoutStyle=_punchoutStyle - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)bundleIdentifier;
-(NSURL *)url;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setPunchoutStyle:(long long)arg1 ;
-(long long)punchoutStyle;
@end

