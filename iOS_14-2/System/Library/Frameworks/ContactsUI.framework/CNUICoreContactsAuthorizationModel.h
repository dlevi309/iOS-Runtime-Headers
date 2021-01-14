/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CNUICoreContactsAuthorizationModel : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _items;

}

@property (nonatomic,readonly) NSArray * items;                          //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) NSArray * changedItems; 
@property (nonatomic,readonly) NSArray * remoteItems; 
@property (nonatomic,readonly) NSArray * bundleIdentifiers; 
@property (nonatomic,readonly) BOOL isEmpty; 
+(BOOL)supportsSecureCoding;
-(id)initWithItems:(id)arg1 ;
-(id)init;
-(NSArray *)changedItems;
-(NSArray *)remoteItems;
-(id)itemWithMatchingBundleIdentifier:(id)arg1 ;
-(id)modelByCopyingItemsWithBundleIdentifier:(id)arg1 ;
-(id)modelByCopyingIconsOfRemoteItemsFromModel:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)items;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEmpty;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)bundleIdentifiers;
-(BOOL)isEqual:(id)arg1 ;
@end

