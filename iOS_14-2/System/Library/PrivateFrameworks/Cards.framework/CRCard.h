/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
*/

@class NSArray, NSSet, NSString, SFCard;


@protocol CRCard <NSObject,NSSecureCoding,NSCopying,CRContent>
@property (nonatomic,readonly) NSArray * cardSections; 
@property (nonatomic,readonly) NSSet * interactions; 
@property (nonatomic,readonly) NSArray * dismissalCommands; 
@property (nonatomic,copy,readonly) NSString * cardIdentifier; 
@property (nonatomic,readonly) unsigned long long cardFormat; 
@property (nonatomic,readonly) BOOL asynchronous; 
@property (nonatomic,readonly) BOOL flexibleSectionOrder; 
@property (nonatomic,readonly) SFCard * backingCard; 
@optional
-(BOOL)flexibleSectionOrder;
-(BOOL)asynchronous;
-(SFCard *)backingCard;
-(void)loadCardWithCompletion:(/*^block*/id)arg1;

@required
-(NSArray *)dismissalCommands;
-(NSSet *)interactions;
-(NSArray *)cardSections;
-(NSString *)cardIdentifier;
-(unsigned long long)cardFormat;

@end

