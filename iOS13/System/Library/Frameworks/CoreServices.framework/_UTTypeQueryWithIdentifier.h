/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/_UTTypeQuery.h>

@class NSString;

@interface _UTTypeQueryWithIdentifier : _UTTypeQuery {

	NSString* _identifier;
	BOOL _dynamic;
	BOOL _valid;

}
+(BOOL)supportsSecureCoding;
+(id)_typeCache;
+(void)_precacheTypesForIdentifiers:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(BOOL)_canResolveLocallyWithoutMappingDatabase;
-(BOOL)getLocallyResolvedType:(id*)arg1 orErrorWithoutMappingDatabase:(id*)arg2 ;
-(id)resolve;
-(void)_enumerateWithXPCConnection:(id)arg1 block:(/*^block*/id)arg2 ;
@end

