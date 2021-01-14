/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


@class NSMapTable;

@interface TSPDeepCopyObjectMap : NSObject {

	NSMapTable* _archivedObjects;
	NSMapTable* _originalIdentifierToDeepCopyObject;
	NSMapTable* _deepCopyIdentifierToOriginalObject;

}
-(void)didReadObjects:(id)arg1 ;
-(void)didWriteObjects:(id)arg1 ;
-(id)deepCopyForObject:(id)arg1 ;
-(id)objectForDeepCopy:(id)arg1 ;
@end

