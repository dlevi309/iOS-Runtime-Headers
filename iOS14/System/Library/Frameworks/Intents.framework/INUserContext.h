/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class INUserContextStore;

@interface INUserContext : NSObject <NSSecureCoding> {

	INUserContextStore* _store;

}
+(long long)_type;
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_becomeCurrentNoHelper;
-(void)becomeCurrent;
-(void)_setStore:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
@end

