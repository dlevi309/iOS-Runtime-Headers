/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SACFPEXItem.h>

@class NSArray, NSString, NSDate;

@interface SACFPEXQuickTypeItem : SACFPEXItem

@property (nonatomic,copy) NSArray * fields; 
@property (nonatomic,copy) NSArray * itemFlags; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * originatingBundleId; 
@property (nonatomic,copy) NSString * originatingWebsiteURL; 
@property (nonatomic,copy) NSDate * startDate; 
@property (nonatomic,copy) NSString * value; 
+(id)quickTypeItemWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)quickTypeItem;
-(NSArray *)itemFlags;
-(void)setFields:(NSArray *)arg1 ;
-(NSArray *)fields;
-(id)groupIdentifier;
-(void)setStartDate:(NSDate *)arg1 ;
-(id)encodedClassName;
-(NSDate *)startDate;
-(NSString *)name;
-(void)setValue:(NSString *)arg1 ;
-(void)setOriginatingWebsiteURL:(NSString *)arg1 ;
-(void)setItemFlags:(NSArray *)arg1 ;
-(void)setOriginatingBundleId:(NSString *)arg1 ;
-(NSString *)originatingBundleId;
-(void)setName:(NSString *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)originatingWebsiteURL;
-(NSString *)label;
-(NSString *)value;
@end

