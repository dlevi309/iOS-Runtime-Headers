/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface MSPSharedTripSharingIdentity : NSObject <NSSecureCoding> {

	BOOL _validAccount;
	NSString* _name;
	NSString* _handle;
	NSArray* _aliases;

}

@property (getter=hasValidAccount,nonatomic,readonly) BOOL validAccount;              //@synthesize validAccount=_validAccount - In the implementation block
@property (nonatomic,readonly) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * handle;                                     //@synthesize handle=_handle - In the implementation block
@property (nonatomic,readonly) NSArray * aliases;                                     //@synthesize aliases=_aliases - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)aliases;
-(NSString *)handle;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)hasValidAccount;
-(id)initWithValidAccount:(BOOL)arg1 name:(id)arg2 handle:(id)arg3 aliases:(id)arg4 ;
@end

