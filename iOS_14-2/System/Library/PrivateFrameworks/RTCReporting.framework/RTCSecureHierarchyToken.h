/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RTCReporting.framework/RTCReporting
*/

#import <RTCReporting/RTCReporting-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface RTCSecureHierarchyToken : NSObject <NSSecureCoding, NSCoding> {

	NSString* _token;
	int _level;

}

@property (nonatomic,copy) NSString * token;              //@synthesize token=_token - In the implementation block
@property (assign,nonatomic) int level;                   //@synthesize level=_level - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithToken:(id)arg1 level:(int)arg2 ;
-(id)description;
-(int)level;
-(void)setToken:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)token;
-(void)setLevel:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

