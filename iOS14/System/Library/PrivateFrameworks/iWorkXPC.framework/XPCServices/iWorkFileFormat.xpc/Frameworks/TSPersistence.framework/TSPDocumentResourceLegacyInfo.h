/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TSPDocumentResourceLegacyInfo : NSObject <NSCopying> {

	NSString* _digestString;
	NSString* _locator;

}

@property (copy,readonly) NSString * digestString; 
@property (copy,readonly) NSString * locator; 
-(id)init;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)digestString;
-(NSString *)locator;
-(id)initWithDigestString:(id)arg1 locator:(id)arg2 ;
-(BOOL)isEqualToDocumentResourceLegacyInfo:(id)arg1 ;
@end

