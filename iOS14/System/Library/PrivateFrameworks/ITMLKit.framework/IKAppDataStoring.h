/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@protocol IKAppDataStoring <NSObject>
@optional
-(id)dictionaryRepresentation;

@required
-(void)clear;
-(unsigned long long)setData:(id)arg1 forKey:(id)arg2;
-(unsigned long long)count;
-(id)keyAtIndex:(unsigned long long)arg1;
-(void)removeDataForKey:(id)arg1;
-(id)getDataForKey:(id)arg1;

@end

