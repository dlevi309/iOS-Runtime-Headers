/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)matchesPlugin:(unsigned)arg1 pluginData:(const LSPluginData*)arg2 withDatabase:(id)arg3 ;
-(id)_queryDictionary;
-(id)_initWithQueryDictionary:(id)arg1 applyFilter:(/*^block*/id)arg2 ;
-(void)_enumerateWithXPCConnection:(id)arg1 block:(/*^block*/id)arg2 ;
@end

