/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSDictionary.h>

@class NSObject;

@interface NSKeyValueChangeDictionary : NSDictionary {

	SCD_Struct_NS62 _details;
	NSObject* _originalObservable;
	BOOL _isPriorNotification;
	BOOL _isRetainingObjects;

}
-(unsigned long long)count;
-(id)keyEnumerator;
-(id)objectForKey:(id)arg1 ;
-(id)initWithDetailsNoCopy:(SCD_Struct_NS63)arg1 originalObservable:(id)arg2 isPriorNotification:(BOOL)arg3 ;
-(void)setOriginalObservable:(id)arg1 ;
-(void)setDetailsNoCopy:(SCD_Struct_NS63)arg1 originalObservable:(id)arg2 ;
-(void)retainObjects;
-(void)dealloc;
@end

