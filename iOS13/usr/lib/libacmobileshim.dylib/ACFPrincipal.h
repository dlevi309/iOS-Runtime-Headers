/*
* Generated on Monday, March 1, 2021 at 2:35:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

#import <libacmobileshim.dylib/libacmobileshim.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface ACFPrincipal : NSObject <NSCopying, NSCoding> {

	NSString* _userName;
	NSString* _realm;
	NSString* _principalString;

}

@property (nonatomic,retain) NSString * userName;                     //@synthesize userName=_userName - In the implementation block
@property (nonatomic,retain) NSString * realm;                        //@synthesize realm=_realm - In the implementation block
@property (nonatomic,retain) NSString * principalString; 
+(id)principalWithPrincipalString:(id)arg1 ;
+(id)principalWithUserName:(id)arg1 realm:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)userName;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)realm;
-(void)setRealm:(NSString *)arg1 ;
-(BOOL)isEqualTo:(id)arg1 ;
-(void)setUserName:(NSString *)arg1 ;
-(void)setPrincipalString:(NSString *)arg1 ;
-(void)releaseCaches;
-(NSString *)principalString;
@end

