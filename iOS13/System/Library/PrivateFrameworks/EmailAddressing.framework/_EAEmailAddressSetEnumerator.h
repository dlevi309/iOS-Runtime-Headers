/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailAddressing.framework/EmailAddressing
*/

#import <EmailAddressing/EmailAddressing-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@class EAEmailAddressSet;

@interface _EAEmailAddressSetEnumerator : NSEnumerator {

	EAEmailAddressSet* _set;
	SCD_Struct_EA2* _state;

}
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_EA2*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)nextObject;
-(id)initWithSet:(id)arg1 ;
@end

