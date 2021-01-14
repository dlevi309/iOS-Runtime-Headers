/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <libobjc.A.dylib/SGEntityKey.h>

@class NSString;

@interface SGSchemaOrgKey : NSObject <SGEntityKey> {

	NSString* _uuid;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isSupportedEntityType:(long long)arg1 ;
-(id)serialize;
-(id)init;
-(id)initWithSerialized:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToSchemaOrgKey:(id)arg1 ;
@end

