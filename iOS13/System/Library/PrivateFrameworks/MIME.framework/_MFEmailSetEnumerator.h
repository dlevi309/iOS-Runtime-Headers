/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
*/

#import <MIME/MIME-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@class MFEmailSet;

@interface _MFEmailSetEnumerator : NSEnumerator {

	MFEmailSet* _set;
	SCD_Struct_MF3* _state;

}
-(void)dealloc;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_MF3*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)nextObject;
-(id)initWithSet:(id)arg1 ;
@end

