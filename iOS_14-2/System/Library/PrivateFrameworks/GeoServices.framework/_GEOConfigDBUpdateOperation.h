/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/_GEOConfigDBOperationBase.h>
#import <libobjc.A.dylib/_GEOConfigDBOperation.h>

@class _GEOConfigDB, NSString;

@interface _GEOConfigDBUpdateOperation : _GEOConfigDBOperationBase <_GEOConfigDBOperation> {

	_GEOConfigDB* _configDB;
	long long _rowId;
	NSString* _type;
	NSString* _value;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)performOperation;
-(id)init:(id)arg1 rowId:(long long)arg2 type:(id)arg3 value:(id)arg4 ;
@end

