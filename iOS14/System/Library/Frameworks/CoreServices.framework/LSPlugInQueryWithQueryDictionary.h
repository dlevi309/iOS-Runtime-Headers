/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/LSPlugInQuery.h>

@class NSDictionary, NSArray;

@interface LSPlugInQueryWithQueryDictionary : LSPlugInQuery {

	NSDictionary* _queryDict;
	NSArray* _extensionIdentifiers;
	NSArray* _extensionPointIdentifiers;
	/*^block*/id _filterBlock;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_enumerateWithXPCConnection:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)_queryDictionary;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)matchesPlugin:(unsigned)arg1 pluginData:(const LSPluginData*)arg2 withDatabase:(id)arg3 ;
-(id)_initWithQueryDictionary:(id)arg1 applyFilter:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

