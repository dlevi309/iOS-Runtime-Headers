/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/STSStgObject.h>

@interface STStorage : STSStgObject {

	StorageRef m_pCStorage;

}
-(void)setClass:(SCD_Struct_ST85)arg1 ;
-(id)init;
-(void)close;
-(id)getInfo;
-(void)dealloc;
-(id)initWithCStorage:(StorageRef)arg1 ;
-(id)openStream:(id)arg1 withMode:(int)arg2 ;
-(id)openStorage:(id)arg1 withMode:(int)arg2 ;
-(id)getChildrenInfo;
-(int)getChildType:(id)arg1 ;
@end

