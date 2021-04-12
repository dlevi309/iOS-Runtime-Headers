/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
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

