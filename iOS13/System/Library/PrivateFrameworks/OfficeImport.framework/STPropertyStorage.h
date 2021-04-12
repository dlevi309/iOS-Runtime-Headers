/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface STPropertyStorage : NSObject {

	SsrwPropertyStorageRef m_pPropertyStorage;

}
-(void)close;
-(id)getDocumentPropertyWithId:(int)arg1 propType:(int*)arg2 ;
-(short)getShortDocumentPropertyWithId:(int)arg1 ;
-(void)setDocumentPropertyWithId:(int)arg1 to:(id)arg2 ;
-(id)initWithPropertyStorage:(SsrwPropertyStorageRef)arg1 ;
-(int)getLongDocumentPropertyWithId:(int)arg1 ;
-(id)getStringDocumentPropertyWithId:(int)arg1 ;
-(id)getDocumentPropertyWithName:(id)arg1 propType:(int*)arg2 ;
-(void)setLongDocumentPropertyWithId:(int)arg1 to:(int)arg2 ;
-(void)setShortDocumentPropertyWithId:(int)arg1 to:(short)arg2 ;
-(void)setStringDocumentPropertyWithId:(int)arg1 to:(id)arg2 ;
-(void)setBlobDocumentPropertyWithName:(id)arg1 to:(id)arg2 ;
@end

