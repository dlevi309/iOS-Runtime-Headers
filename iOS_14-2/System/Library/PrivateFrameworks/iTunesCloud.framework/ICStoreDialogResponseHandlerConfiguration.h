/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface ICStoreDialogResponseHandlerConfiguration : NSObject <NSCopying, NSSecureCoding> {

	BOOL _allowsHandlingNonAuthenticationDialogs;
	BOOL _shouldRecordLastAuthenticationDialogResponseTime;

}

@property (assign,nonatomic) BOOL allowsHandlingNonAuthenticationDialogs;                        //@synthesize allowsHandlingNonAuthenticationDialogs=_allowsHandlingNonAuthenticationDialogs - In the implementation block
@property (assign,nonatomic) BOOL shouldRecordLastAuthenticationDialogResponseTime;              //@synthesize shouldRecordLastAuthenticationDialogResponseTime=_shouldRecordLastAuthenticationDialogResponseTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)allowsHandlingNonAuthenticationDialogs;
-(BOOL)shouldRecordLastAuthenticationDialogResponseTime;
-(void)setAllowsHandlingNonAuthenticationDialogs:(BOOL)arg1 ;
-(void)setShouldRecordLastAuthenticationDialogResponseTime:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

