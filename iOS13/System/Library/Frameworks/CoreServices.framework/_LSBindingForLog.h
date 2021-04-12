/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/


#import <CoreServices/CoreServices-Structs.h>
@class _LSDatabase;

@interface _LSBindingForLog : NSObject {

	_LSDatabase* _db;
	LSBinding* _binding;

}
-(id)description;
-(id)redactedDescription;
-(id)initWithState:(const State*)arg1 binding:(const ExtendedBinding*)arg2 ;
@end

