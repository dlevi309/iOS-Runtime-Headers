/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSArray, NSNumber;

@interface SASportsMetadataGroup : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * groupTitle; 
@property (nonatomic,copy) NSArray * metadata; 
@property (nonatomic,copy) NSNumber * selected; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)metadataGroup;
+(id)metadataGroupWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setSelected:(NSNumber *)arg1 ;
-(void)setMetadata:(NSArray *)arg1 ;
-(NSNumber *)selected;
-(void)setGroupTitle:(NSString *)arg1 ;
-(NSString *)groupTitle;
-(NSArray *)metadata;
@end

