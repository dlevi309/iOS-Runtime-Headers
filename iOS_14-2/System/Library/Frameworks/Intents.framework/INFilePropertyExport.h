/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSString, INDateComponentsRange, INPerson, NSNumber;


@protocol INFilePropertyExport <NSObject,JSExport>
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * qualifier; 
@property (nonatomic,copy) NSString * type; 
@property (nonatomic,copy) INDateComponentsRange * dateComponentsRange; 
@property (nonatomic,copy) INPerson * person; 
@property (nonatomic,copy) NSString * value; 
@property (nonatomic,copy) NSNumber * quantity; 
@required
-(INPerson *)person;
-(id)init;
-(NSNumber *)quantity;
-(void)setType:(id)arg1;
-(NSString *)name;
-(void)setValue:(id)arg1;
-(NSString *)qualifier;
-(void)setQualifier:(id)arg1;
-(INDateComponentsRange *)dateComponentsRange;
-(void)setDateComponentsRange:(id)arg1;
-(NSString *)type;
-(void)setQuantity:(id)arg1;
-(void)setPerson:(id)arg1;
-(void)setName:(id)arg1;
-(NSString *)value;

@end

