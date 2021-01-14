/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class NSArray, NSString;

@interface SASTImageCollectionItem : AceObject <SASTTemplateItem>

@property (nonatomic,copy) NSArray * images; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)imageCollectionItem;
+(id)imageCollectionItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setImages:(NSArray *)arg1 ;
-(NSArray *)images;
@end

