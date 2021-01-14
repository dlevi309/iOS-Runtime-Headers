/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


#import <Contacts/Contacts-Structs.h>
@class NSString;

@interface CNContainerPropertyDescription : NSObject

@property (nonatomic,copy,readonly) NSString * key; 
@property (nonatomic,readonly) BOOL isWritable; 
@property (nonatomic,readonly) Class valueClass; 
-(Class)valueClass;
-(id)CNValueFromABValue:(void*)arg1 ;
-(void*)ABValueFromCNValue:(id)arg1 ;
-(id)CNValueForContainer:(id)arg1 ;
-(void)setCNValue:(id)arg1 onContainer:(id)arg2 ;
-(BOOL)isValidValue:(id)arg1 error:(id*)arg2 ;
-(BOOL)isWritable;
-(BOOL)isValue:(id)arg1 equalToEmptyEquivalentOrValue:(id)arg2 ;
-(NSString *)key;
-(id)nilValue;
-(int)abPropertyID;
-(BOOL)isConvertibleABValue:(void*)arg1 ;
-(void*)ABValueForABSource:(void*)arg1 ;
-(BOOL)setABValue:(void*)arg1 onABSource:(void*)arg2 error:(_CFError*)arg3 ;
@end

