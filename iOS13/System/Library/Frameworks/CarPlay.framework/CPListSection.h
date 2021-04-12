/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)items;
-(NSString *)header;
-(id)initWithItems:(id)arg1 ;
-(long long)numberOfItems;
-(id)itemAtIndex:(long long)arg1 ;
-(id)initWithItems:(id)arg1 header:(id)arg2 sectionIndexTitle:(id)arg3 ;
-(NSString *)sectionIndexTitle;
@end

