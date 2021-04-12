/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

