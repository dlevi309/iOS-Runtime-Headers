/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSArray;

@interface LSAppClipMetadata : NSObject <NSSecureCoding> {

	NSDictionary* _appClipPlist;
	NSArray* _parentApplicationIdentifiers;

}

@property (readonly) NSArray * parentApplicationIdentifiers;              //@synthesize parentApplicationIdentifiers=_parentApplicationIdentifiers - In the implementation block
@property (readonly) BOOL wantsEphemeralNotifications; 
@property (readonly) BOOL wantsLocationConfirmation; 
+(id)new;
+(BOOL)supportsSecureCoding;
-(id)_initWithApplicationRecord:(id)arg1 parentApplicationIdentifiers:(id)arg2 appClipPlist:(id)arg3 ;
-(NSArray *)parentApplicationIdentifiers;
-(BOOL)wantsLocationConfirmation;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)wantsEphemeralNotifications;
@end

