/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


#import <Contacts/Contacts-Structs.h>
@class NSString;

@interface CNContainerPropertyDescription : NSObject

@property (nonatomic,copy,readonly) NSString * key; 
@property (nonatomic,readonly) BOOL isWritable; 
@property (nonatomic,readonly) Class valueClass; 
-(NSString *)key;
-(Class)valueClass;
-(id)nilValue;
-(BOOL)isWritable;
-(BOOL)isValidValue:(id)arg1 error:(id*)arg2 ;
-(id)CNValueForContainer:(id)arg1 ;
-(void)setCNValue:(id)arg1 onContainer:(id)arg2 ;
-(BOOL)isValue:(id)arg1 equalToEmptyEquivalentOrValue:(id)arg2 ;
-(int)abPropertyID;
-(void*)ABValueFromCNValue:(id)arg1 ;
-(id)CNValueFromABValue:(void*)arg1 ;
-(BOOL)isConvertibleABValue:(void*)arg1 ;
-(void*)ABValueForABSource:(void*)arg1 ;
-(BOOL)setABValue:(void*)arg1 onABSource:(void*)arg2 error:(_CFError*)arg3 ;
@end

