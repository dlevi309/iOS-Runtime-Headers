/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/_LSQuery.h>

@interface LSPlugInQuery : _LSQuery
+(BOOL)supportsSecureCoding;
+(id)pluginQuery;
+(id)pluginQueryWithQueryDictionary:(id)arg1 applyFilter:(/*^block*/id)arg2 ;
+(id)pluginQueryWithUUID:(id)arg1 ;
+(id)pluginQueryWithIdentifier:(id)arg1 ;
+(id)pluginQueryWithURL:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)sort:(BOOL)arg1 pluginIDs:(id)arg2 andYield:(/*^block*/id)arg3 context:(LSContext*)arg4 ;
-(void)_enumerateWithXPCConnection:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)_requiresDatabaseMappingEntitlement;
@end

