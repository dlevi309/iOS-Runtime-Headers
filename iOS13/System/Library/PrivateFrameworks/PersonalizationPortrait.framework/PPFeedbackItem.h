/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PPFeedbackItem : NSObject <NSSecureCoding, NSCopying> {

	unsigned _itemFeedbackType;
	NSString* _itemString;

}

@property (nonatomic,readonly) NSString * itemString;                  //@synthesize itemString=_itemString - In the implementation block
@property (nonatomic,readonly) unsigned itemFeedbackType;              //@synthesize itemFeedbackType=_itemFeedbackType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)stringForItemFeedbackType:(unsigned)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithItemString:(id)arg1 itemFeedbackType:(unsigned)arg2 ;
-(BOOL)isEqualToPPFeedbackItem:(id)arg1 ;
-(NSString *)itemString;
-(unsigned)itemFeedbackType;
@end

