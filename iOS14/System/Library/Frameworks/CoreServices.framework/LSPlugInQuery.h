/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/_LSQuery.h>

@interface LSPlugInQuery : _LSQuery
+(BOOL)supportsSecureCoding;
+(id)pluginQueryWithURL:(id)arg1 ;
+(id)pluginQueryWithUUID:(id)arg1 ;
+(id)pluginQueryWithIdentifier:(id)arg1 ;
+(id)pluginQueryWithQueryDictionary:(id)arg1 applyFilter:(/*^block*/id)arg2 ;
+(id)pluginQuery;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_enumerateWithXPCConnection:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)sort:(BOOL)arg1 pluginIDs:(id)arg2 andYield:(/*^block*/id)arg3 context:(LSContext*)arg4 ;
-(BOOL)_requiresDatabaseMappingEntitlement;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

