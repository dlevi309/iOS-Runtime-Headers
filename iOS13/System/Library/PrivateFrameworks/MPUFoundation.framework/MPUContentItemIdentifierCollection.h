/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMapTable;

@interface MPUContentItemIdentifierCollection : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSMapTable* _identifierTypeToIdentifier;
	unsigned long long _itemType;

}

@property (nonatomic,readonly) unsigned long long identifierCount; 
@property (nonatomic,readonly) unsigned long long itemType;                     //@synthesize itemType=_itemType - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_copyWithZone:(NSZone*)arg1 class:(Class)arg2 ;
-(unsigned long long)identifierCount;
-(unsigned long long)itemType;
-(id)identifierForIdentifierType:(unsigned long long)arg1 ;
-(id)initWithItemType:(unsigned long long)arg1 ;
-(void)enumerateIdentifiersUsingBlock:(/*^block*/id)arg1 ;
-(void)_setIdentifier:(id)arg1 forIdentifierType:(unsigned long long)arg2 ;
@end

