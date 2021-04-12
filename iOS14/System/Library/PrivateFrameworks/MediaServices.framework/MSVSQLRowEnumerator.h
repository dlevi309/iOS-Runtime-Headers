/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/

#import <CoreFoundation/NSEnumerator.h>
#import <libobjc.A.dylib/MSVSQLRowResult.h>

@class MSVSQLStatement, NSString;

@interface MSVSQLRowEnumerator : NSEnumerator <MSVSQLRowResult> {

	MSVSQLStatement* _statement;

}

@property (nonatomic,readonly) long long columnCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)nextObject;
-(id)objectValueAtColumnIndex:(long long)arg1 ;
-(double)doubleValueAtColumnIndex:(long long)arg1 ;
-(BOOL)isNullValueAtColumnIndex:(long long)arg1 ;
-(BOOL)boolValueAtColumnIndex:(long long)arg1 ;
-(unsigned long long)uint64ValueAtColumnIndex:(long long)arg1 ;
-(float)floatValueAtColumnIndex:(long long)arg1 ;
-(id)dateValueAtColumnIndex:(long long)arg1 ;
-(NSString *)description;
-(long long)columnCount;
-(id)columnNameAtIndex:(long long)arg1 ;
-(id)nextObjectWithError:(id*)arg1 ;
-(id)jsonValueAtColumnIndex:(long long)arg1 error:(id*)arg2 ;
-(id)stringValueAtColumnIndex:(long long)arg1 ;
-(long long)int64ValueAtColumnIndex:(long long)arg1 ;
-(id)dataValueAtColumnIndex:(long long)arg1 ;
@end

