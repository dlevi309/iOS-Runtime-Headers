/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)initWithTSUFormatFormatStruct:(SCD_Struct_OI38)arg1 ;
-(id)initWithTSUFormatFormatStruct:(SCD_Struct_OI38)arg1 useExpandedContents:(BOOL)arg2 ;
-(SCD_Struct_OI38)formatStruct;
-(BOOL)useExpandedContents;
-(void)p_setFormatStruct:(SCD_Struct_OI38)arg1 ;
@end

