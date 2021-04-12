/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/ESDObject.h>

@class NSMutableArray;

@interface ESDRoot : ESDObject {

	NSMutableArray* mChildren;

}
-(id)init;
-(void)addChild:(id)arg1 ;
-(unsigned long long)childCount;
-(id)childAt:(unsigned long long)arg1 ;
-(id)initWithEshObject:(EshObject*)arg1 ;
-(void)writeToWriter:(OcWriterRef)arg1 ;
-(EshRoot*)eshRoot;
-(id)initFromReader:(OcReader*)arg1 ;
-(id)pbReferenceWithID:(unsigned)arg1 ;
-(id)initWithPbState:(id)arg1 ;
@end

