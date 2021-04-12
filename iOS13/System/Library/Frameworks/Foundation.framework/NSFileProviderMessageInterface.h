/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithName:(id)arg1 itemIdentifier:(id)arg2 providerIdentifier:(id)arg3 ;
-(NSString *)itemIdentifier;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(NSString *)providerIdentifier;
-(void)setProviderIdentifier:(NSString *)arg1 ;
@end

