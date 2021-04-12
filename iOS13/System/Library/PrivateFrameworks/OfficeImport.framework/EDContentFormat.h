/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)key;
-(id)formatString;
-(BOOL)builtIn;
-(unsigned long long)formatId;
-(BOOL)isEqualToContentFormat:(id)arg1 ;
-(BOOL)referenced;
-(void)setFormatId:(unsigned long long)arg1 ;
-(void)setReferenced:(BOOL)arg1 ;
@end

