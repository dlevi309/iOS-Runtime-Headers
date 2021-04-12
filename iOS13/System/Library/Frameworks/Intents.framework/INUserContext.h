/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(void)becomeCurrent;
-(void)_setStore:(id)arg1 ;
-(void)_becomeCurrentNoHelper;
@end

