/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSString, INPriceRange;


@protocol INRidePartySizeOptionExport <NSObject,JSExport>
@property (assign,nonatomic) NSRange partySizeRange; 
@property (nonatomic,copy) NSString * sizeDescription; 
@property (nonatomic,copy) INPriceRange * priceRange; 
@required
-(id)init;
-(NSRange)partySizeRange;
-(void)setPartySizeRange:(NSRange)arg1;
-(NSString *)sizeDescription;
-(void)setSizeDescription:(id)arg1;
-(INPriceRange *)priceRange;
-(void)setPriceRange:(id)arg1;

@end

