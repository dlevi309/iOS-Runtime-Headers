/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSReading/TSPObject.h>

@class NSArray;

@interface TSPObjectContainer : TSPObject {

	unsigned char _packageIdentifier;
	NSArray* _childObjects;

}
+(long long)objectIdentifierForPackageIdentifier:(unsigned char)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(id)packageLocator;
-(BOOL)shouldDelayArchiving;
-(unsigned)delayedArchivingPriority;
-(long long)tsp_identifier;
-(id)initWithContext:(id)arg1 packageIdentifier:(unsigned char)arg2 ;
-(void)prepareForComponentWriteWithDelayedObjects:(id)arg1 ;
@end

