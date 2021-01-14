/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NSFileProviderMessageInterface : NSObject <NSSecureCoding> {

	NSString* _name;
	NSString* _itemIdentifier;
	NSString* _providerIdentifier;

}

@property (copy) NSString * itemIdentifier;                  //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (copy) NSString * providerIdentifier;              //@synthesize providerIdentifier=_providerIdentifier - In the implementation block
@property (copy,readonly) NSString * name;                   //@synthesize name=_name - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)itemIdentifier;
-(NSString *)providerIdentifier;
-(id)initWithName:(id)arg1 itemIdentifier:(id)arg2 providerIdentifier:(id)arg3 ;
-(void)setProviderIdentifier:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(NSString *)name;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
@end

