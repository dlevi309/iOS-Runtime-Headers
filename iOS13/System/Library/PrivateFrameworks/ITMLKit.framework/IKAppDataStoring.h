/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@protocol IKAppDataStoring <NSObject>
@optional
-(id)dictionaryRepresentation;

@required
-(unsigned long long)count;
-(void)clear;
-(id)keyAtIndex:(unsigned long long)arg1;
-(unsigned long long)setData:(id)arg1 forKey:(id)arg2;
-(void)removeDataForKey:(id)arg1;
-(id)getDataForKey:(id)arg1;

@end

