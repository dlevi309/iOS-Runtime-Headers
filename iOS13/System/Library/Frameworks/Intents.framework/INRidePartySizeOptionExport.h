/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSString, INPriceRange;


@protocol INRidePartySizeOptionExport <NSObject,JSExport>
@property (assign,nonatomic) NSRange partySizeRange; 
@property (nonatomic,copy) NSString * sizeDescription; 
@property (nonatomic,copy) INPriceRange * priceRange; 
@required
-(id)init;
-(INPriceRange *)priceRange;
-(void)setPriceRange:(id)arg1;
-(NSRange)partySizeRange;
-(void)setPartySizeRange:(NSRange)arg1;
-(NSString *)sizeDescription;
-(void)setSizeDescription:(id)arg1;

@end

