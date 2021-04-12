/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)token;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)level;
-(void)setToken:(NSString *)arg1 ;
-(void)setLevel:(int)arg1 ;
-(id)initWithToken:(id)arg1 level:(int)arg2 ;
@end

