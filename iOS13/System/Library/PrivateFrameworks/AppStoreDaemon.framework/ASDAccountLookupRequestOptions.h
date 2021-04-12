/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <AppStoreDaemon/ASDRequestOptions.h>

@interface ASDAccountLookupRequestOptions : ASDRequestOptions {

	BOOL _authIfNeeded;

}

@property (assign,nonatomic) BOOL authIfNeeded;              //@synthesize authIfNeeded=_authIfNeeded - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)authIfNeeded;
-(void)setAuthIfNeeded:(BOOL)arg1 ;
@end

