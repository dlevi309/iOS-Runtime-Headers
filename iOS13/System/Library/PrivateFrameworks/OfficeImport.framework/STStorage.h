/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/STSStgObject.h>

@interface STStorage : STSStgObject {

	StorageRef m_pCStorage;

}
-(id)init;
-(void)dealloc;
-(void)close;
-(void)setClass:(SCD_Struct_ST85)arg1 ;
-(id)initWithCStorage:(StorageRef)arg1 ;
-(id)openStream:(id)arg1 withMode:(int)arg2 ;
-(id)openStorage:(id)arg1 withMode:(int)arg2 ;
-(id)getInfo;
-(id)getChildrenInfo;
-(int)getChildType:(id)arg1 ;
@end

