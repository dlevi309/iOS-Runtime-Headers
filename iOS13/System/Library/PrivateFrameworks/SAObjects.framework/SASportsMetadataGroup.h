/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setMetadata:(NSArray *)arg1 ;
-(NSArray *)metadata;
-(void)setSelected:(NSNumber *)arg1 ;
-(NSNumber *)selected;
-(void)setGroupTitle:(NSString *)arg1 ;
-(NSString *)groupTitle;
-(id)encodedClassName;
@end

