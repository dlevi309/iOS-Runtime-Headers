/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSString;

@interface STStgInfo : NSObject {

	NSString* m_pstrName;
	int m_type;
	unsigned m_userFlags;
	unsigned m_size;
	long long m_creationTime;
	long long m_modificationTime;
	int m_accessMode;
	SCD_Struct_ST85 m_clsid;

}
-(id)init;
-(void)setType:(int)arg1 ;
-(void)setName:(id)arg1 ;
-(void)setSize:(unsigned)arg1 ;
-(void)setCreationTime:(long long)arg1 ;
-(void)setModificationTime:(long long)arg1 ;
-(int)getType;
-(id)getName;
-(unsigned)getSize;
-(void)setCLSID:(SCD_Struct_ST85)arg1 ;
-(id)initWithStgInfo:(const StgInfo*)arg1 ;
-(unsigned)getUserFlags;
-(void)setUserFlags:(unsigned)arg1 ;
-(long long)getCreationTime;
-(long long)getModificationTime;
-(int)getAccessMode;
-(void)setAccessMode:(int)arg1 ;
-(SCD_Struct_ST85)getCLSID;
@end

