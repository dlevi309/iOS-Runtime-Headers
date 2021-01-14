/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/TSUDataFormat.h>

@class NSString;

@interface OITSUDurationFormat : NSObject <NSCopying, TSUDataFormat> {

	NSString* mFormat;
	NSString* mName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)formatWithFormat:(id)arg1 name:(id)arg2 ;
-(id)format;
-(NSString *)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)initWithFormat:(id)arg1 name:(id)arg2 ;
-(id)formatName;
-(void)setFormatName:(id)arg1 ;
@end

