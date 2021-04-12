/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


#import <Foundation/Foundation-Structs.h>
@class NSMutableDictionary;

@interface _NSThreadData : NSObject {

	id dict;
	id name;
	id target;
	SEL selector;
	id argument;
	int seqNum;
	unsigned char qstate;
	char qos;
	unsigned char cancel;
	unsigned char status;
	id performQ;
	NSMutableDictionary* performD;
	opaque_pthread_attr_t attr;
	opaque_pthread_t* tid;
	double pri;
	double defpri;

}
@end

