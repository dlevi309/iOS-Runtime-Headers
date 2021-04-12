/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNPropertyDescription.h>
#import <libobjc.A.dylib/CNAbstractPropertyDescription.h>

@class NSString;

@interface CNFullscreenImageDataDescription : CNPropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)CNValueForContact:(id)arg1 ;
-(void)decodeUsingCoder:(id)arg1 contact:(id)arg2 ;
-(BOOL)isEqualForContact:(id)arg1 other:(id)arg2 ;
-(void)setCNValue:(id)arg1 onContact:(id)arg2 ;
-(void)encodeUsingCoder:(id)arg1 contact:(id)arg2 ;
-(BOOL)abPropertyID:(int*)arg1 ;
-(Class)valueClass;
-(id)init;
-(void*)ABValueForABPerson:(void*)arg1 ;
-(BOOL)setABValue:(void*)arg1 onABPerson:(void*)arg2 error:(_CFError*)arg3 ;
-(BOOL)setCNValue:(id)arg1 onABPerson:(void*)arg2 withDependentPropertiesContext:(id)arg3 error:(id*)arg4 ;
@end

