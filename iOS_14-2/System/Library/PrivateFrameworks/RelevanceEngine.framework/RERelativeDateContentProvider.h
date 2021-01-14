/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)units;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)style;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDate:(id)arg1 style:(long long)arg2 units:(unsigned long long)arg3 ;
-(id)attributedStringRepresentation;
-(id)clockKitTextProviderRepresentation;
@end

