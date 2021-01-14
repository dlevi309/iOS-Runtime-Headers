/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(EshRoot*)eshRoot;
-(id)childAt:(unsigned long long)arg1 ;
-(id)initWithEshObject:(EshObject*)arg1 ;
-(void)writeToWriter:(OcWriterRef)arg1 ;
-(id)initFromReader:(OcReader*)arg1 ;
-(id)pbReferenceWithID:(unsigned)arg1 ;
-(id)initWithPbState:(id)arg1 ;
@end

