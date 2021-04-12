/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
*/

#import <CoreNFC/CoreNFC-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface NFCVASCommandConfiguration : NSObject <NSCopying> {

	long long _mode;
	NSString* _passTypeIdentifier;
	NSURL* _url;

}

@property (assign,nonatomic) long long mode;                             //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) NSString * passTypeIdentifier;              //@synthesize passTypeIdentifier=_passTypeIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * url;                                //@synthesize url=_url - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMode:(long long)arg1 ;
-(NSURL *)url;
-(long long)mode;
-(void)setUrl:(NSURL *)arg1 ;
-(NSString *)passTypeIdentifier;
-(void)setPassTypeIdentifier:(NSString *)arg1 ;
-(id)initWithVASMode:(long long)arg1 passTypeIdentifier:(id)arg2 url:(id)arg3 ;
@end

