/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSString *)name;
-(NSString *)type;
-(void)setType:(id)arg1;
-(void)setName:(id)arg1;
-(NSString *)value;
-(void)setValue:(id)arg1;
-(NSNumber *)quantity;
-(void)setQuantity:(id)arg1;
-(INPerson *)person;
-(void)setPerson:(id)arg1;
-(NSString *)qualifier;
-(void)setQualifier:(id)arg1;
-(INDateComponentsRange *)dateComponentsRange;
-(void)setDateComponentsRange:(id)arg1;

@end

