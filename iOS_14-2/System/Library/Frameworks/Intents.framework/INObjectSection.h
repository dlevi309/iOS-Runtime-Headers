/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface INObjectSection : NSObject <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	NSString* _title;
	NSArray* _items;

}

@property (nonatomic,copy,readonly) NSString * _identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSArray * items;                     //@synthesize items=_items - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)items;
-(NSString *)_identifier;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTitle:(id)arg1 items:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 items:(id)arg3 ;
-(NSString *)title;
@end

