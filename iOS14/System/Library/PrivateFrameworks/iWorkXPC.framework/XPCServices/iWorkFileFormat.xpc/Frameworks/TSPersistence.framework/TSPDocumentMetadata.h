/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSReading/TSPObject.h>

@interface TSPDocumentMetadata : TSPObject {

	BOOL _isInCollaborationModeForArchiving;

}
-(id)packageLocator;
-(long long)tsp_identifier;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(unsigned char)componentRequiredPackageIdentifier;
-(void)takeSnapshotWithCollaborationMode:(BOOL)arg1 ;
@end

