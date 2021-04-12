/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/


@protocol MSVSQLRowResult <NSObject>
@required
-(id)objectValueAtColumnIndex:(long long)arg1;
-(double)doubleValueAtColumnIndex:(long long)arg1;
-(BOOL)isNullValueAtColumnIndex:(long long)arg1;
-(BOOL)boolValueAtColumnIndex:(long long)arg1;
-(unsigned long long)uint64ValueAtColumnIndex:(long long)arg1;
-(float)floatValueAtColumnIndex:(long long)arg1;
-(id)dateValueAtColumnIndex:(long long)arg1;
-(id)jsonValueAtColumnIndex:(long long)arg1 error:(id*)arg2;
-(id)stringValueAtColumnIndex:(long long)arg1;
-(long long)int64ValueAtColumnIndex:(long long)arg1;
-(id)dataValueAtColumnIndex:(long long)arg1;

@end

