/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface OITSUFormatObject : NSObject <NSCopying, NSMutableCopying> {

	SCD_Struct_OI34 mFormatStruct;
	BOOL mUseExpandedContents;

}

@property (nonatomic,readonly) BOOL useExpandedContents; 
@property (nonatomic,readonly) SCD_Struct_OI38 formatStruct; 
+(id)defaultDateFormat:(id)arg1 ;
+(id)defaultDurationFormat;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithTSUFormatFormatStruct:(SCD_Struct_OI38)arg1 ;
-(id)initWithTSUFormatFormatStruct:(SCD_Struct_OI38)arg1 useExpandedContents:(BOOL)arg2 ;
-(SCD_Struct_OI38)formatStruct;
-(BOOL)useExpandedContents;
-(void)p_setFormatStruct:(SCD_Struct_OI38)arg1 ;
@end

