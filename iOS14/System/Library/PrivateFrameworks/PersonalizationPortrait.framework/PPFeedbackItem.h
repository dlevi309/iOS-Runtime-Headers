/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqualToPPFeedbackItem:(id)arg1 ;
-(unsigned)itemFeedbackType;
-(id)initWithItemString:(id)arg1 itemFeedbackType:(unsigned)arg2 ;
-(NSString *)itemString;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

