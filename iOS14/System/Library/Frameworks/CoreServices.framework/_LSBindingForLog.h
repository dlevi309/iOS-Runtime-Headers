/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/


#import <CoreServices/CoreServices-Structs.h>
@class _LSDatabase;

@interface _LSBindingForLog : NSObject {

	_LSDatabase* _db;
	LSBinding* _binding;

}
-(id)initWithState:(const State*)arg1 binding:(const LSBinding*)arg2 ;
-(id)description;
-(id)redactedDescription;
@end

