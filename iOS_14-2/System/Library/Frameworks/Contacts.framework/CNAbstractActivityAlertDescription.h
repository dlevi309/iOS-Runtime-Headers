/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/CNPropertyDescription.h>
#import <libobjc.A.dylib/CNAbstractPropertyDescription.h>

@class NSString;

@interface CNAbstractActivityAlertDescription : CNPropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(Class)valueClass;
-(id)CNValueFromABValue:(void*)arg1 ;
-(BOOL)canUnifyValue:(id)arg1 withValue:(id)arg2 ;
-(void*)ABValueFromCNValue:(id)arg1 ;
-(id)CNMutableValueForABMultivalue;
@end

