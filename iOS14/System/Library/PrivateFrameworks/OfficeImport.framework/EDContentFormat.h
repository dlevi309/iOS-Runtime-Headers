/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/EDKeyedObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class EDString, NSString;

@interface EDContentFormat : NSObject <EDKeyedObject, NSCopying> {

	EDString* mFormatString;
	unsigned long long mFormatId;
	BOOL mBuiltIn;
	BOOL mReferenced;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contentFormatWithFormatString:(id)arg1 ;
+(id)contentFormatWithFormatString:(id)arg1 formatId:(unsigned long long)arg2 ;
+(id)contentFormatWithNSString:(id)arg1 formatId:(unsigned long long)arg2 builtIn:(BOOL)arg3 ;
-(id)formatString;
-(id)init;
-(BOOL)builtIn;
-(NSString *)description;
-(long long)key;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)formatId;
-(BOOL)isEqualToContentFormat:(id)arg1 ;
-(BOOL)referenced;
-(void)setFormatId:(unsigned long long)arg1 ;
-(void)setReferenced:(BOOL)arg1 ;
@end

