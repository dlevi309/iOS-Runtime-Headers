/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)bundleIdentifier;
-(NSURL *)url;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)punchoutStyle;
-(void)setPunchoutStyle:(long long)arg1 ;
@end

