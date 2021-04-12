/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/_GEOConfigDBOperationBase.h>
#import <libobjc.A.dylib/_GEOConfigDBOperation.h>

@class _GEOConfigDB, NSString;

@interface _GEOConfigDBInsertOperation : _GEOConfigDBOperationBase <_GEOConfigDBOperation> {

	_GEOConfigDB* _configDB;
	long long _rowId;
	NSString* _type;
	NSString* _key;
	NSString* _value;
	long long _parentId;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)performOperation;
-(id)init:(id)arg1 rowId:(long long)arg2 type:(id)arg3 key:(id)arg4 value:(id)arg5 parentId:(long long)arg6 ;
@end

