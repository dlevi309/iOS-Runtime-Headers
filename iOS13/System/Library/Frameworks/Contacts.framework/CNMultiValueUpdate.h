/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <libobjc.A.dylib/CNMultiValueUpdate_iOSAB.h>

@class NSString;

@interface CNMultiValueUpdate : NSObject <CNMultiValueUpdate_iOSAB> {

	BOOL _ignoreIdentifiers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL ignoreIdentifiers;                //@synthesize ignoreIdentifiers=_ignoreIdentifiers - In the implementation block
+(id)addValue:(id)arg1 ;
+(id)removeValue:(id)arg1 ;
+(id)replaceValue:(id)arg1 withValue:(id)arg2 ;
+(id)reorderValues:(id)arg1 ;
-(void)applyToMutableMultiValue:(id)arg1 withIdentifierMap:(id)arg2 ;
-(void)setIgnoreIdentifiers:(BOOL)arg1 ;
-(BOOL)ignoreIdentifiers;
-(BOOL)applyToABPerson:(void*)arg1 abmultivalue:(void*)arg2 propertyDescription:(id)arg3 logger:(id)arg4 error:(id*)arg5 ;
-(long long)multiValueIndexForValue:(id)arg1 inMultiValue:(void*)arg2 identifier:(id*)arg3 ;
@end

