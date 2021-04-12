/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)quickTypeItem;
+(id)quickTypeItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(NSDate *)startDate;
-(id)groupIdentifier;
-(NSArray *)fields;
-(NSArray *)itemFlags;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setFields:(NSArray *)arg1 ;
-(NSString *)originatingBundleId;
-(id)encodedClassName;
-(NSString *)originatingWebsiteURL;
-(void)setOriginatingWebsiteURL:(NSString *)arg1 ;
-(void)setItemFlags:(NSArray *)arg1 ;
-(void)setOriginatingBundleId:(NSString *)arg1 ;
@end

