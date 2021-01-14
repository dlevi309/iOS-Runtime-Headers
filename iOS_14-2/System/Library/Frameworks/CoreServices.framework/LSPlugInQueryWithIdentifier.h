/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/LSPlugInQuery.h>

@class NSString;

@interface LSPlugInQueryWithIdentifier : LSPlugInQuery {

	int _bindingMap;
	NSString* _identifier;

}
+(BOOL)supportsSecureCoding;
-(BOOL)isBindingMapValid;
-(id)_initWithIdentifier:(id)arg1 inMap:(int)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_enumerateWithXPCConnection:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)_identifier;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

