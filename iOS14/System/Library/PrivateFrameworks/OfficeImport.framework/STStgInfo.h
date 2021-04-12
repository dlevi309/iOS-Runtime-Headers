/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setModificationTime:(long long)arg1 ;
-(id)init;
-(void)setCreationTime:(long long)arg1 ;
-(void)setSize:(unsigned)arg1 ;
-(void)setType:(int)arg1 ;
-(int)getType;
-(id)getName;
-(void)setName:(id)arg1 ;
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

