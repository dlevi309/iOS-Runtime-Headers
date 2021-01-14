/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


@class NSMutableIndexSet, NSMutableDictionary;

@interface TSPObjectContextDeterministicUUIDSet : NSObject {

	NSMutableIndexSet* _identifiers;
	NSMutableDictionary* _offsetsPerIdentifier;

}
-(BOOL)addEntryForIdentifier:(long long)arg1 offset:(unsigned long long)arg2 ;
@end

