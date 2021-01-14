/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAMPMediaEntity.h>

@class NSArray;

@interface SAMPCollection : SAMPMediaEntity

@property (assign,nonatomic) BOOL editable; 
@property (nonatomic,copy) NSArray * items; 
+(id)collection;
+(id)collectionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setItems:(NSArray *)arg1 ;
-(id)encodedClassName;
-(NSArray *)items;
-(BOOL)editable;
-(void)setEditable:(BOOL)arg1 ;
@end

