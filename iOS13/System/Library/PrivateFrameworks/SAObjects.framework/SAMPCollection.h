/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)setEditable:(BOOL)arg1 ;
-(BOOL)editable;
-(id)encodedClassName;
@end

