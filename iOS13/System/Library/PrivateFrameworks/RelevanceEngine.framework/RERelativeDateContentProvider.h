/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RETextContentProvider.h>

@class NSDate;

@interface RERelativeDateContentProvider : RETextContentProvider {

	NSDate* _date;
	long long _style;
	unsigned long long _units;

}

@property (nonatomic,readonly) NSDate * date;                         //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) long long style;                       //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) unsigned long long units;              //@synthesize units=_units - In the implementation block
+(id)relativeDateContentProviderWithDate:(id)arg1 style:(long long)arg2 units:(unsigned long long)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(long long)style;
-(unsigned long long)units;
-(id)attributedStringRepresentation;
-(id)clockKitTextProviderRepresentation;
-(id)initWithDate:(id)arg1 style:(long long)arg2 units:(unsigned long long)arg3 ;
@end

