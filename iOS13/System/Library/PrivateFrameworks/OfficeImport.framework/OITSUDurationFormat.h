/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)format;
-(id)initWithFormat:(id)arg1 name:(id)arg2 ;
-(id)formatName;
-(void)setFormatName:(id)arg1 ;
@end

