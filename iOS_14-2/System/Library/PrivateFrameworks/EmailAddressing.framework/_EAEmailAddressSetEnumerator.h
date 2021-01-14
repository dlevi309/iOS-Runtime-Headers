/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailAddressing.framework/EmailAddressing
*/

#import <EmailAddressing/EmailAddressing-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@class EAEmailAddressSet;

@interface _EAEmailAddressSetEnumerator : NSEnumerator {

	EAEmailAddressSet* _set;
	SCD_Struct_EA2* _state;

}
-(id)nextObject;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_EA2*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithSet:(id)arg1 ;
@end

