/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
*/

#import <WatchKit/SPComplicationData.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface SPStockListComplicationData : SPComplicationData <NSSecureCoding> {

	NSArray* _stockList;

}

@property (nonatomic,retain) NSArray * stockList;              //@synthesize stockList=_stockList - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)stockList;
-(void)setStockList:(NSArray *)arg1 ;
@end

