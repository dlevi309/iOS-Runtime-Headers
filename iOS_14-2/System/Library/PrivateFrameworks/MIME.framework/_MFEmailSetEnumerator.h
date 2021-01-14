/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
*/

#import <MIME/MIME-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@class MFEmailSet;

@interface _MFEmailSetEnumerator : NSEnumerator {

	MFEmailSet* _set;
	SCD_Struct_MF3* _state;

}
-(id)nextObject;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_MF3*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithSet:(id)arg1 ;
-(void)dealloc;
@end

