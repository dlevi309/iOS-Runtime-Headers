/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface CPListSection : NSObject <NSSecureCoding> {

	NSString* _header;
	NSString* _sectionIndexTitle;
	NSArray* _items;

}

@property (nonatomic,copy,readonly) NSString * header;                         //@synthesize header=_header - In the implementation block
@property (nonatomic,copy,readonly) NSString * sectionIndexTitle;              //@synthesize sectionIndexTitle=_sectionIndexTitle - In the implementation block
@property (nonatomic,copy,readonly) NSArray * items;                           //@synthesize items=_items - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithItems:(id)arg1 ;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(long long)numberOfItems;
-(NSString *)header;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)items;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)indexOfItem:(id)arg1 ;
-(void)replaceItems:(id)arg1 ;
-(id)initWithItems:(id)arg1 header:(id)arg2 sectionIndexTitle:(id)arg3 ;
-(NSString *)sectionIndexTitle;
-(void)replaceItemAtIndex:(unsigned long long)arg1 withItem:(id)arg2 ;
@end

