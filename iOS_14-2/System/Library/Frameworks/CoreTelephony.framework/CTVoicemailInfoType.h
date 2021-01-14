/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface CTVoicemailInfoType : NSObject <NSCopying, NSSecureCoding> {

	BOOL _available;
	BOOL _isNetworkOriginated;
	BOOL _isVoiceMailMWI;
	NSString* _url;
	NSNumber* _count;

}

@property (nonatomic,retain) NSString * url;                        //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) BOOL available;                        //@synthesize available=_available - In the implementation block
@property (nonatomic,retain) NSNumber * count;                      //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) BOOL isNetworkOriginated;              //@synthesize isNetworkOriginated=_isNetworkOriginated - In the implementation block
@property (assign,nonatomic) BOOL isVoiceMailMWI;                   //@synthesize isVoiceMailMWI=_isVoiceMailMWI - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setAvailable:(BOOL)arg1 ;
-(void)setCount:(NSNumber *)arg1 ;
-(BOOL)available;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)count;
-(id)initWithParam:(id)arg1 available:(BOOL)arg2 count:(id)arg3 isNetworkOriginated:(BOOL)arg4 isVoiceMailMWI:(BOOL)arg5 ;
-(NSString *)url;
-(BOOL)isNetworkOriginated;
-(id)description;
-(void)setUrl:(NSString *)arg1 ;
-(BOOL)isVoiceMailMWI;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToCTVoicemailInfoType:(id)arg1 ;
-(void)setIsNetworkOriginated:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIsVoiceMailMWI:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

